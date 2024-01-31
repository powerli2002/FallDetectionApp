from PIL import Image
from PySide2.QtCore import Qt
from PySide2.QtGui import QPixmap, QImage
from PySide2.QtWidgets import QComboBox, QPushButton

from ui.main import Ui_MainWindow
from yolo import YOLO

import time

import cv2
from PySide2 import QtWidgets, QtCore, QtGui
import qtawesome as qta
import qtmodern.styles
import qtmodern.windows
import sys

import joblib
import mediapipe as mp
import numpy as np


class UI_mainwindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        super(UI_mainwindow, self).__init__(parent)
        # super.__init__(parent)
        self.fps = None
        # self.capture = None
        self.yolo = None
        self.timer_video = QtCore.QTimer()  # 定时器
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.init_slots()  # 定义控件绑定相关操作
        self.cap = cv2.VideoCapture()  # 参数是0，表示打开笔记本的内置摄像头，参数是视频文件路径则打开视频
        self.output_folder = '/output/'  # 输出文件夹
        self.vid_writer = None  # ?初始化一个空的 VideoWriter 对象
        self.num_stop = 1  # 暂停或继续辅助信号
        self.keyXYZ = [
            "nose_x",
            "nose_y",
            "nose_z",
            "left_eye_inner_x",
            "left_eye_inner_y",
            "left_eye_inner_z",
            "left_eye_x",
            "left_eye_y",
            "left_eye_z",
            "left_eye_outer_x",
            "left_eye_outer_y",
            "left_eye_outer_z",
            "right_eye_inner_x",
            "right_eye_inner_y",
            "right_eye_inner_z",
            "right_eye_x",
            "right_eye_y",
            "right_eye_z",
            "right_eye_outer_x",
            "right_eye_outer_y",
            "right_eye_outer_z",
            "left_ear_x",
            "left_ear_y",
            "left_ear_z",
            "right_ear_x",
            "right_ear_y",
            "right_ear_z",
            "mouth_left_x",
            "mouth_left_y",
            "mouth_left_z",
            "mouth_right_x",
            "mouth_right_y",
            "mouth_right_z",
            "left_shoulder_x",
            "left_shoulder_y",
            "left_shoulder_z",
            "right_shoulder_x",
            "right_shoulder_y",
            "right_shoulder_z",
            "left_elbow_x",
            "left_elbow_y",
            "left_elbow_z",
            "right_elbow_x",
            "right_elbow_y",
            "right_elbow_z",
            "left_wrist_x",
            "left_wrist_y",
            "left_wrist_z",
            "right_wrist_x",
            "right_wrist_y",
            "right_wrist_z",
            "left_pinky_x",
            "left_pinky_y",
            "left_pinky_z",
            "right_pinky_x",
            "right_pinky_y",
            "right_pinky_z",
            "left_index_x",
            "left_index_y",
            "left_index_z",
            "right_index_x",
            "right_index_y",
            "right_index_z",
            "left_thumb_x",
            "left_thumb_y",
            "left_thumb_z",
            "right_thumb_x",
            "right_thumb_y",
            "right_thumb_z",
            "left_hip_x",
            "left_hip_y",
            "left_hip_z",
            "right_hip_x",
            "right_hip_y",
            "right_hip_z",
            "left_knee_x",
            "left_knee_y",
            "left_knee_z",
            "right_knee_x",
            "right_knee_y",
            "right_knee_z",
            "left_ankle_x",
            "left_ankle_y",
            "left_ankle_z",
            "right_ankle_x",
            "right_ankle_y",
            "right_ankle_z",
            "left_heel_x",
            "left_heel_y",
            "left_heel_z",
            "right_heel_x",
            "right_heel_y",
            "right_heel_z",
            "left_foot_index_x",
            "left_foot_index_y",
            "left_foot_index_z",
            "right_foot_index_x",
            "right_foot_index_y",
            "right_foot_index_z"
        ]

        # 权重初始文件名
        self.openfile_name_model = None

        # 模型选择 -1未选择 0是knn 1是yolo
        self.choosemodel = -1
        self.update_button_state()

        self.ui.label_flag.setText('正常')
        # 设置字体为华文琥珀

        self.ui.label_flag.setStyleSheet("color: blue; font: 35pt '华文琥珀'; font-weight: bold;")

    # 逻辑
    # 先初始化模型，然后根据选择的模型 对按钮进行禁用处理。初始化模型之前无法使用
    # 不模型初始化了

    # knn 可以进行 图片检测，视频检测，摄像头检测
    # yolo可进行所有
    # 投票模型（ 可进行knn对应的。

    def init_slots(self):
        self.ui.Button_photo.clicked.connect(self.open_photo)
        self.ui.Button_video.clicked.connect(self.open_video)
        self.ui.Button_stop.clicked.connect(self.stop_video)
        self.ui.Button_over.clicked.connect(self.over)
        self.ui.Button_camera.clicked.connect(self.open_camera)
        self.ui.Button_init.clicked.connect(self.model_init)
        self.ui.Button_exit.clicked.connect(self.window_exit)

        self.ui.comboBox.currentIndexChanged.connect(self.update_button_state)

    def update_button_state(self):
        if self.ui.comboBox.currentText() == "无模型":
            self.choosemodel = -1
            self.ui.Button_init.setEnabled(False)
            self.ui.Button_photo.setEnabled(False)
            self.ui.Button_video.setEnabled(False)
            self.ui.Button_camera.setEnabled(False)
        else:
            self.ui.Button_init.setEnabled(True)
            self.ui.Button_photo.setEnabled(False)
            self.ui.Button_video.setEnabled(False)
            self.ui.Button_camera.setEnabled(False)


    def predict_todo(self, arg_mode, photo_name, video_name):

        mode = arg_mode
        crop = False
        count = False
        video_path = video_name
        video_save_path = ""
        video_fps = 25.0
        test_interval = 100
        fps_image_path = "img/street.jpg"
        dir_origin_path = "img/"
        dir_save_path = "img_out/"

        if mode == "predict":
            '''
            1、如果想要进行检测完的图片的保存，利用r_image.save("img.jpg")即可保存，直接在predict.py里进行修改即可。 
            2、如果想要获得预测框的坐标，可以进入yolo.detect_image函数，在绘图部分读取top，left，bottom，right这四个值。
            3、如果想要利用预测框截取下目标，可以进入yolo.detect_image函数，在绘图部分利用获取到的top，left，bottom，right这四个值
            在原图上利用矩阵的方式进行截取。
            4、如果想要在预测图上写额外的字，比如检测到的特定目标的数量，可以进入yolo.detect_image函数，在绘图部分对predicted_class进行判断，
            比如判断if predicted_class == 'car': 即可判断当前目标是否为车，然后记录数量即可。利用draw.text即可写字。
            '''
            self.ui.textBrowser.append('开始图片检测')
            self.ui.textBrowser.ensureCursorVisible()
            img = photo_name
            try:
                image = Image.open(img)
                img_array = np.array(image)
            except:
                QtWidgets.QMessageBox.critical(self, '错误', '图片打开失败')

            else:
                if self.choosemodel == 1:
                    r_image = self.yolo.detect_image(image, crop=crop, count=count)
                elif self.choosemodel == 2:
                    pose = self.mp_pose.Pose(
                        static_image_mode=True,
                        min_detection_confidence=0.5,
                        min_tracking_confidence=0.5)

                    r_image = self.yolo.detect_image_mediapipe(image, img_array, pose, self.mp_pose)
                r_image.image.save('./img/processed2.png')

                ans_set = set()

                for i in range(r_image.times):
                    self.ui.textBrowser.append("检测到：" + str(r_image.label[i].decode('utf-8', errors='ignore')))
                    ans_set.add(r_image.label[i].decode('utf-8', errors='ignore').split(' ')[0])
                    self.ui.label_flag.setStyleSheet("color: red; font: 35pt '华文琥珀'; font-weight: bold;")
                    self.ui.textBrowser.append(str(r_image.top[i]))
                    self.ui.textBrowser.append(str(r_image.left[i]))
                    self.ui.textBrowser.append(str(r_image.bottom[i]))
                    self.ui.textBrowser.append(str(r_image.right[i]))
                    self.ui.textBrowser.ensureCursorVisible()

                if 'fall' or 'down' in ans_set:
                    self.ui.label_flag.setText('跌倒')
                    self.ui.label_flag.setStyleSheet("color: red; font: 35pt '华文琥珀'; font-weight: bold;")
                else:
                    self.ui.label_flag.setText('正常')
                    self.ui.label_flag.setStyleSheet("color: blue; font: 35pt '华文琥珀'; font-weight: bold;")


        elif mode == "video":

            if video_save_path != "":
                fourcc = cv2.VideoWriter_fourcc(*'XVID')
                size = (
                    int(self.capture.get(cv2.CAP_PROP_FRAME_WIDTH)), int(self.capture.get(cv2.CAP_PROP_FRAME_HEIGHT)))
                out = cv2.VideoWriter(video_save_path, fourcc, video_fps, size)

            self.fps = 0.0

            if self.choosemodel == 1:
                self.timer_video.timeout.connect(self.open_frame)
            elif self.choosemodel == 2:
                pose = self.mp_pose.Pose(
                    static_image_mode=True,
                    min_detection_confidence=0.5,
                    min_tracking_confidence=0.5)

                self.timer_video.timeout.connect(lambda: self.open_frame_mediapipe_yolo(pose))
            self.timer_video.start(10)  # 1ms读取一帧

        else:
            raise AssertionError(
                "Please specify the correct mode: 'predict', 'video', 'fps', 'heatmap', 'export_onnx', 'dir_predict'.")

    def model_init(self):

        if self.ui.comboBox.currentText() == "KNN模型":
            self.choosemodel = 0
            self.pose_knn = joblib.load('./KNN/Model/knnmodel.joblib')
            self.mp_drawing = mp.solutions.drawing_utils
            self.mp_drawing_styles = mp.solutions.drawing_styles
            self.mp_pose = mp.solutions.pose


        elif self.ui.comboBox.currentText() == "YOLO模型":
            self.choosemodel = 1
            self.yolo = YOLO()


        elif self.ui.comboBox.currentText() == "YOLO+KNN":
            self.choosemodel = 2
            self.yolo = YOLO()
            self.pose_knn = joblib.load('./KNN/Model/knnmodel.joblib')
            self.mp_drawing = mp.solutions.drawing_utils
            self.mp_drawing_styles = mp.solutions.drawing_styles
            self.mp_pose = mp.solutions.pose

        QtWidgets.QMessageBox.warning(self, '提示', '模型初始化完成')
        self.ui.Button_photo.setEnabled(True)
        self.ui.Button_video.setEnabled(True)
        self.ui.Button_camera.setEnabled(True)

    def window_exit(self):
        reply = QtWidgets.QMessageBox.information(self, '请确认', '是否退出平台',
                                                  QtWidgets.QMessageBox.Yes | QtWidgets.QMessageBox.No,
                                                  QtWidgets.QMessageBox.Yes)
        if reply == QtWidgets.QMessageBox.Yes:
            UI_mainwindow.close(self)

    def open_photo(self):
        print('already open_photo')
        self.ui.textBrowser.append('图片打开中')
        self.ui.textBrowser.ensureCursorVisible()

        name_list = []
        try:
            image_name, _ = QtWidgets.QFileDialog.getOpenFileName(self, '打开图片', './',
                                                                  'Image Files (*.jpg *.gif *.png)')
        except OSError as reason:
            print('文件打开出错' + str(reason))
            self.ui.textBrowser.append('文件打开出错' + str(reason))
            self.ui.textBrowser.ensureCursorVisible()
        else:
            # 判断图片是否为空
            if not image_name:
                QtWidgets.QMessageBox.warning(self, '警告', '打开失败')
            # 上处与前程序不同

            else:
                img = cv2.imread(image_name)
                print("img_name:", image_name)
                if self.choosemodel == 0:
                    self.KNN_predict_photo(image_name)
                else:
                    # 接下来该检测图片
                    self.predict_todo('predict', image_name, None)
                processed_photo_path = image_name[:-4] + '_processed' + image_name[-4:]
                tmp_photo = QtGui.QPixmap('./img/processed2.png').scaled(self.ui.label_display.size(),
                                                                         Qt.KeepAspectRatio, Qt.SmoothTransformation)
                # 上式修复图片自适应问题，先将图片设置为label一样的大小，后面参数是为了保持图片清晰度

                self.ui.label_display.setPixmap(tmp_photo)
                # .scaled(self.ui.label.width(), self.ui.label.height(), Qt.KeepAspectRatio, Qt.SmoothTransformation
                print(self.ui.label_display.width())
                print(self.ui.label_display.height())

                self.ui.label_display.setScaledContents(True)  # 图片自适应

    def set_video_name_and_path(self):
        # 获取当前系统时间，作为img和video的文件名
        now = time.strftime("%Y-%m-%d-%H-%M-%S", time.localtime(time.time()))
        # if vid_cap:  # video
        fps = self.cap.get(cv2.CAP_PROP_FPS)
        w = int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        h = int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        # 视频检测结果存储位置
        save_path = self.output_folder + 'video_output/' + now + '.mp4'
        return fps, w, h, save_path

    def open_frame(self):
        if (self.num_stop % 2 == 1):
            t1 = time.time()
            # 读取某一帧
            ref, frame = self.cap.read()  # 返回的是两个参数，第一个参数为布尔值，第二个参数为图像本身
            if not ref:  # 如果读取失败，则退出循环
                print('读取结束')
                self.cap.release()
                self.timer_video.stop()
            else:

                # 格式转变，BGRtoRGB
                frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                # 转变成Image
                frame = Image.fromarray(np.uint8(frame))
                # 进行检测
                tmp_frame = self.yolo.detect_image(frame)



                frame = np.array(tmp_frame.image)
                # RGBtoBGR满足opencv显示格式
                frame = cv2.cvtColor(frame, cv2.COLOR_RGB2BGR)

                self.fps = (self.fps + (1. / (time.time() - t1))) / 2
                print("fps= %.2f" % (self.fps))

                self.ui.textBrowser.append("fps= %.2f" % (self.fps))

                # ans = {}
                # 创建一个空集合

                ans_set = set()

                for i in range(tmp_frame.times):
                    self.ui.textBrowser.append("检测到：" + str(tmp_frame.label[i].decode('utf-8', errors='ignore')))
                    ans_set.add(tmp_frame.label[i].decode('utf-8', errors='ignore').split(' ')[0])
                    self.ui.textBrowser.append(str(tmp_frame.top[i]))
                    self.ui.textBrowser.append(str(tmp_frame.left[i]))
                    self.ui.textBrowser.append(str(tmp_frame.bottom[i]))
                    self.ui.textBrowser.append(str(tmp_frame.right[i]))
                    self.ui.textBrowser.ensureCursorVisible()

                if 'down' in ans_set:
                    self.ui.label_flag.setText('跌倒')
                    self.ui.label_flag.setStyleSheet("color: red; font: 35pt '华文琥珀'; font-weight: bold;")
                else:
                    self.ui.label_flag.setText('正常')
                    self.ui.label_flag.setStyleSheet("color: blue; font: 35pt '华文琥珀'; font-weight: bold;")

                frame = cv2.putText(frame, "fps= %.2f" % (self.fps), (0, 40), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0),
                                    2)

                if len(frame.shape) == 3:
                    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_RGB888)
                elif len(frame.shape) == 1:
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_Indexed8)
                else:
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_RGB888)

                self.ui.label_display.setPixmap(
                    QPixmap(video_img).scaled(self.ui.label_display.size(), Qt.KeepAspectRatio,
                                              Qt.SmoothTransformation))
                self.ui.label_display.setScaledContents(True)

        # self.cap.release()

    def open_frame_knn(self, pose):
        if (self.num_stop % 2 == 1):
            t1 = time.time()
            # 读取某一帧
            ref, frame = self.cap.read()
            if not ref:  # 如果读取失败，则退出循环
                print('读取结束')
                self.cap.release()
                self.timer_video.stop()
            else:

                # image.flags.writeable = False
                # Convert image to RGB format
                image_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

                # Process the image
                results = pose.process(image_rgb)

                if results.pose_landmarks:
                    # Extract pose landmarks
                    res_point = []
                    for index, landmarks in enumerate(results.pose_landmarks.landmark):
                        res_point.append(landmarks.x)
                        res_point.append(landmarks.y)
                        res_point.append(landmarks.z)

                    # Reshape the array
                    shape1 = int(len(res_point) / len(self.keyXYZ))
                    res_point = np.array(res_point).reshape(shape1, len(self.keyXYZ))

                    # Make predictions using the KNN model
                    pred = self.pose_knn.predict(res_point)
                    print(pred)


                    if pred == 1:
                        self.ui.label_flag.setText('跌倒')
                        self.ui.label_flag.setStyleSheet("color: red; font: 35pt '华文琥珀'; font-weight: bold;")
                        self.ui.textBrowser.append("检测到：跌倒")
                    elif pred == 0:
                        self.ui.label_flag.setText('正常')
                        self.ui.label_flag.setStyleSheet("color: blue; font: 35pt '华文琥珀'; font-weight: bold;")
                        self.ui.textBrowser.append("检测到：正常")

                self.fps = (self.fps + (1. / (time.time() - t1))) / 2
                frame = cv2.putText(frame, "fps= %.2f" % (self.fps), (0, 40), cv2.FONT_HERSHEY_SIMPLEX, 1,
                                    (0, 255, 0),
                                    2)

                frame.flags.writeable = True


                # Draw the pose landmarks on the image
                self.mp_drawing.draw_landmarks(
                    frame,
                    results.pose_landmarks,
                    self.mp_pose.POSE_CONNECTIONS,
                    landmark_drawing_spec=self.mp_drawing_styles.get_default_pose_landmarks_style())

                if len(frame.shape) == 3:
                    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_RGB888)
                elif len(frame.shape) == 1:
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_Indexed8)
                else:
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_RGB888)

                self.ui.label_display.setPixmap(
                    QPixmap(video_img).scaled(self.ui.label_display.size(), Qt.KeepAspectRatio,
                                              Qt.SmoothTransformation))
                self.ui.label_display.setScaledContents(True)

    def open_frame_mediapipe_yolo(self, pose):
        if (self.num_stop % 2 == 1):
            t1 = time.time()
            # 读取某一帧
            ref, frame = self.cap.read()  # 返回的是两个参数，第一个参数为布尔值，第二个参数为图像本身
            origin_frame = frame
            if not ref:  # 如果读取失败，则退出循环
                print('读取结束')
                self.cap.release()
                self.timer_video.stop()
            else:

                # 格式转变，BGRtoRGB
                frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                # 转变成Image
                frame = Image.fromarray(np.uint8(frame))
                # 进行检测
                tmp_frame = self.yolo.detect_image_mediapipe(frame, origin_frame, pose,self.pose_knn)
                frame = np.array(tmp_frame.image)
                # RGBtoBGR满足opencv显示格式
                frame = cv2.cvtColor(frame, cv2.COLOR_RGB2BGR)

                self.fps = (self.fps + (1. / (time.time() - t1))) / 2
                print("fps= %.2f" % (self.fps))

                self.ui.textBrowser.append("fps= %.2f" % (self.fps))

                ans_set = set()
                for i in range(tmp_frame.times):
                    self.ui.textBrowser.append("检测到：" + str(tmp_frame.label[i].decode('utf-8', errors='ignore')))
                    ans_set.add(tmp_frame.label[i].decode('utf-8', errors='ignore').split(' ')[0])

                    self.ui.textBrowser.append(str(tmp_frame.knnans[i]))
                    self.ui.textBrowser.append(str(tmp_frame.top[i]))
                    self.ui.textBrowser.append(str(tmp_frame.left[i]))
                    self.ui.textBrowser.append(str(tmp_frame.bottom[i]))
                    self.ui.textBrowser.append(str(tmp_frame.right[i]))
                    self.ui.textBrowser.ensureCursorVisible()

                if 'down' in ans_set:
                    self.ui.label_flag.setText('跌倒')
                    self.ui.label_flag.setStyleSheet("color: red; font: 35pt '华文琥珀'; font-weight: bold;")
                else:
                    self.ui.label_flag.setText('正常')
                    self.ui.label_flag.setStyleSheet("color: blue; font: 35pt '华文琥珀'; font-weight: bold;")

                frame = cv2.putText(frame, "fps= %.2f" % (self.fps), (0, 40), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0),
                                    2)

                if len(frame.shape) == 3:
                    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_RGB888)
                elif len(frame.shape) == 1:
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_Indexed8)
                else:
                    video_img = QImage(frame.data, frame.shape[1], frame.shape[0], QImage.Format_RGB888)

                self.ui.label_display.setPixmap(
                    QPixmap(video_img).scaled(self.ui.label_display.size(), Qt.KeepAspectRatio,
                                              Qt.SmoothTransformation))
                self.ui.label_display.setScaledContents(True)

        # self.cap.release()

    def open_video(self):
        print('open_video')
        self.ui.textBrowser.append('视频打开中')
        self.ui.textBrowser.ensureCursorVisible()
        video_name, _ = QtWidgets.QFileDialog.getOpenFileName(self, '打开视频', './', 'Video Files (*.mp4 *.avi *.mov)')
        flag = self.cap.open(video_name)
        # 在这里打开
        if not flag:
            QtWidgets.QMessageBox.warning(self, '警告', '打开失败')
        else:
            if self.choosemodel == 0:
                self.KNN_video()

            elif self.choosemodel == 1 or self.choosemodel == 2:
                self.predict_todo('video', None, video_name)


    def stop_video(self):
        self.timer_video.blockSignals(False)

        # 暂停检测
        # 若QTimer已经触发，且激活
        if self.timer_video.isActive() ==1 and self.num_stop % 2 == 1:
            self.ui.Button_stop.setText(u'继续检测')  # 当前状态为暂停状态
            self.num_stop = self.num_stop + 1  # 调整标记信号为偶数
            self.timer_video.blockSignals(True)
            self.ui.textBrowser.append('视频已暂停')
            self.ui.textBrowser.ensureCursorVisible()
        # 继续检测
        elif self.timer_video.isActive() ==1 and self.num_stop % 2 == 0:
            self.num_stop = self.num_stop + 1
            self.ui.Button_stop.setText(u'暂停检测')
            self.ui.textBrowser.append('视频已继续')
            self.ui.textBrowser.ensureCursorVisible()

    def over(self):
        print('over process')
        self.ui.textBrowser.append('结束检测并清空')
        self.ui.textBrowser.ensureCursorVisible()
        self.cap.release()  # 释放video_capture资源
        # self.vid_writer.release()  # 释放video_writer资源
        self.ui.label_display.clear()  # 清空label画布

        # if self.choosemodel == 0:
        #     self.timer_video.timeout.disconnect(self.open_frame_knn(0))
        # elif self.choosemodel == 1:
        #     self.timer_video.timeout.disconnect(self.open_frame())
        # elif self.choosemodel == 2:
        #     self.timer_video.timeout.disconnect(self.open_frame_mediapipe_yolo(0))
        self.timer_video.stop()  # 停止定时器
        # self.timer_video.blockSignals(False) # 释放定时器
        QtWidgets.QMessageBox.warning(self, '提示', '检测结束，已清空提示框')
        self.ui.Button_stop.setText(u'暂停/继续')
        self.ui.textBrowser.clear()
        self.timer_video.timeout.disconnect()



    def open_camera(self):
        print('open camera')
        self.ui.textBrowser.append('摄像头已打开')
        self.ui.textBrowser.ensureCursorVisible()
        flag = self.cap.open(0)
        if not flag:
            QtWidgets.QMessageBox.warning(self, '警告', '打开失败')
        else:
            if self.choosemodel == 0:
                self.KNN_video()
            elif self.choosemodel == 1:
                self.predict_todo('video', None, 0)
            elif self.choosemodel == 2:
                self.predict_todo('video', None, 0)

    def KNN_video(self):

        pose = self.mp_pose.Pose(
            static_image_mode=True,
            min_detection_confidence=0.5,
            min_tracking_confidence=0.5)
        self.fps = 0.0
        self.timer_video.timeout.connect(lambda: self.open_frame_knn(pose))
        self.timer_video.start(10)

    def KNN_predict_photo(self, image_path):

        image = cv2.imread(image_path)

        # Initialize MediaPipe Pose model
        with self.mp_pose.Pose(
                static_image_mode=True,
                min_detection_confidence=0.5,
                min_tracking_confidence=0.5) as pose:
            # image.flags.writeable = False
            # Convert image to RGB format
            image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

            # Process the image
            results = pose.process(image_rgb)

            if results.pose_landmarks:
                # Extract pose landmarks
                res_point = []
                for index, landmarks in enumerate(results.pose_landmarks.landmark):
                    res_point.append(landmarks.x)
                    res_point.append(landmarks.y)
                    res_point.append(landmarks.z)

                # Reshape the array
                shape1 = int(len(res_point) / len(self.keyXYZ))
                res_point = np.array(res_point).reshape(shape1, len(self.keyXYZ))

                # Make predictions using the KNN model
                pred = self.pose_knn.predict(res_point)
                print(pred)

                # Display the result on the image
                # if pred == 0:
                #     cv2.putText(image, "Normal", (200, 320), cv2.FONT_HERSHEY_PLAIN, 5, (255, 0, 0), 2)
                # else:  # fall是1
                #     cv2.putText(image, "Fall", (200, 320), cv2.FONT_HERSHEY_PLAIN, 5, (0, 255, 0), 2)
            image.flags.writeable = True

            if pred == 1:
                self.ui.label_flag.setText('跌倒')
                self.ui.label_flag.setStyleSheet("color: red; font: 35pt '华文琥珀'; font-weight: bold;")
            elif pred == 0:
                self.ui.label_flag.setText('正常')
                self.ui.label_flag.setStyleSheet("color: blue; font: 35pt '华文琥珀'; font-weight: bold;")

            # Draw the pose landmarks on the image
            self.mp_drawing.draw_landmarks(
                image,
                results.pose_landmarks,
                self.mp_pose.POSE_CONNECTIONS,
                landmark_drawing_spec=self.mp_drawing_styles.get_default_pose_landmarks_style())

            # 保存image,在原名后加上_processed
            # cv2.imwrite(image_path[:-4] + '_processed' + image_path[-4:], image)
            # image.save('./img/processed2.png')
            cv2.imwrite('./img/processed2.png', image)
            if pred == 0:
                self.ui.textBrowser.append('Normal')
                self.ui.textBrowser.ensureCursorVisible()
            else:
                self.ui.textBrowser.append('Fall')
                self.ui.textBrowser.ensureCursorVisible()


if __name__ == '__main__':
    app = 0
    app = QtWidgets.QApplication(sys.argv)
    ui = UI_mainwindow()
    # apply_stylesheet(app, theme='light_teal.xml')
    # app.setStyleSheet(qdarkstyle.load_stylesheet(qt_api='pyside2', palette=LightPalette()))

    qtmodern.styles.light(app)
    ui = qtmodern.windows.ModernWindow(ui)
    ui.setWindowIcon(qta.icon('ri.robot-line', color='black'))

    ui.setWindowTitle('老人跌倒检测监控平台')
    ui.show()
    sys.exit(app.exec_())
