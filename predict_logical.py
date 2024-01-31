import sys
import time

import cv2
from PySide2 import QtWidgets, QtCore, QtGui

from ui.main import Ui_MainWindow



class UI_mainwindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        super(UI_mainwindow, self).__init__(parent)
        #super.__init__(parent)
        self.timer_video = QtCore.QTimer()  # 定时器
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.init_slots()  # 定义控件绑定相关操作
        self.cap = cv2.VideoCapture()  # 参数是0，表示打开笔记本的内置摄像头，参数是视频文件路径则打开视频
        self.output_folder = '/output/'  # 输出文件夹
        self.vid_writer = None  # ?初始化一个空的 VideoWriter 对象

        # 权重初始文件名
        self.openfile_name_model = None

    def init_slots(self):
        self.ui.Button_photo.clicked.connect(self.open_photo)
        self.ui.Button_video.clicked.connect(self.open_video)
        self.ui.Button_stop.clicked.connect(self.stop_video)

    def open_photo(self):
        print('already open_photo')
        name_list = []
        try:
            image_name, _ = QtWidgets.QFileDialog.getOpenFileName(self, '打开图片', './', 'Image Files (*.jpg *.gif *.png)')
        except OSError as reason:
            print('文件打开出错' + str(reason))
        else:
            # 判断图片是否为空
            if not image_name:
                QtWidgets.QMessageBox.warning(self, '警告', '打开失败')
            # 上处与前程序不同

            else:
                img = cv2.imread(image_name)
                print("img_name:", image_name)
                # 接下来该检测图片
                predict_todo('predict', image_name, None)
                self.ui.label_display.setPixmap(QtGui.QPixmap('./img/processed2.png'))
                self.ui.label_display.setScaledContents(True)#图片自适应


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


    def open_video(self):
        print('open_video')
        video_name, _ = QtWidgets.QFileDialog.getOpenFileName(self, '打开视频', './', 'Video Files (*.mp4 *.avi *.mov)')
        flag = self.cap.open(video_name)
        if not flag:
            QtWidgets.QMessageBox.warning(self, '警告', '打开失败')
        else:
            predict_todo('video', None, video_name)
            fps, w, h, save_path = self.set_video_name_and_path()
            self.vid_writer = cv2.VideoWriter(save_path, cv2.VideoWriter_fourcc(*'mp4v'), fps, (w, h))

            self.timer_video.start(30) # 以30ms为间隔，启动或重启定时器
            # 进行视频识别时，关闭其他按键点击功能
            self.ui.Button_video.setDisabled(True)
            self.ui.Button_photo.setDisabled(True)
            #self.ui.pushButton_camer.setDisabled(True)
















    def stop_video(self):
        print('stop video')




if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    ui = UI_mainwindow()
    ui.show()
    sys.exit(app.exec_())
