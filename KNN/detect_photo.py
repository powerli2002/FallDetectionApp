import cv2
import mediapipe as mp
import numpy as np
import joblib

from Train_Model import keyPoint

# Load the pre-trained KNN model
pose_knn = joblib.load('Model/PoseKeypoint.joblib')

# MediaPipe setup
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_pose = mp.solutions.pose

# Define keypoints and print their count
keyXYZ = [
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
print(len(keyXYZ))

# Capture an image (replace "your_image.jpg" with the path to your image)
image_path = "../photo_test.jpg"
image = cv2.imread(image_path)

# Initialize MediaPipe Pose model
with mp_pose.Pose(
        static_image_mode=True,
        min_detection_confidence=0.5,
        min_tracking_confidence=0.5) as pose:
    # image.flags.writeable = False
    # Convert image to RGB format
    image_rgb = cv2.cvtColor(image,cv2.COLOR_BGR2RGB)

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
        shape1 = int(len(res_point) / len(keyXYZ))
        res_point = np.array(res_point).reshape(shape1, len(keyXYZ))

        # Make predictions using the KNN model
        pred = pose_knn.predict(res_point)
        print(pred)

        # Display the result on the image
        if pred == 0:
            cv2.putText(image, "Normal", (200, 320), cv2.FONT_HERSHEY_PLAIN, 5, (255, 0, 0), 2)
        else: # fall是1
            cv2.putText(image, "Fall", (200, 320), cv2.FONT_HERSHEY_PLAIN, 5, (0, 255, 0), 2)
    image.flags.writeable = True
    # Draw the pose landmarks on the image
    mp_drawing.draw_landmarks(
        image,
        results.pose_landmarks,
        mp_pose.POSE_CONNECTIONS,
        landmark_drawing_spec=mp_drawing_styles.get_default_pose_landmarks_style())

    # Display the image
    cv2.imshow('MediaPipe Pose', image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()