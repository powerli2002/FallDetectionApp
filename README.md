## FallDetectionApp

实现了一个基于pyside2的桌面程序, 使用yolov5以及KNN算法进行跌倒检测.

## 使用

安装环境: 

`pip install -r requirement.txt`

运行桌面程序:

`python StartUp.py`

运行检测程序:

`python predict.py`

训练模型(需要数据集)

`python train.py`

获得评估:

`python get_map.py`



注意模型路径修改和模式改变

## 关于KNN算法

使用meidapipe进行人体关键点提取，再使用knn算法进行分类。对视频每帧调用mp.solutions.pose进行人体关键点提取，分别存入对应csv文件。再对数据集进行划分。

数据集中包括人体关键点数据，共100列。第一列为标签，后面为33个关键点*3坐标数据。

**训练过程：**

调用sklearn的knn模型，设置k=3，读取训练集进行训练，保存权重到joblib文件中。

对数据检测一次的速度为1.24ms。

对图像检测一次的速度为1/6=166ms。

**模型检验**

调用sklearn.metrics 库，对模型在测试集上进行相关指标的评估。

<img src="E:\E-CODE\DL\fall_detection\FallDetectionApp\assets\image-20240131130652628.png" alt="image-20240131130652628" style="zoom:67%;" />



此数值建立在数据集较小情况下的理论情况，而理论性能好的模型不一定对实际情况做出较好应对。实际上，受限于数据集和knn本身限制，此模型不具有很好泛化性. 



## YOLOv5算法

### 训练过程

数据集来源：飞桨公开数据集falldown

其中包括7782张图片，可用类别为：person和fall（后期修改），

对数据集进行重新划分，划分时去除无效标签。划分比例为(训练集+验证集):测试集 = 9:1，训练集:验证集 = 9:1。



yolov5s版本模型，sgd优化器，momentum = 0.937，

权值衰减weight_decay=5e-4。

学习率下降方式为cos。

最大学习率0.01，最小学习率为其0.01倍。

<img src="E:\E-CODE\DL\fall_detection\FallDetectionApp\assets\image-20240131130706380.png" alt="image-20240131130706380" style="zoom:67%;" />



**模型检验：**

nms_iou=0.5，门限值为0.5时

| **Class**  **Scores**       | **Fall** | **Person** |
| --------------------------- | -------- | ---------- |
| **AP**                      | 85.11%   | 69.49%     |
| **F1**                      | 0.68     | 0.52       |
| **Recall**                  | 53.60%   | 37.57%     |
| **Precision**               | 92.79%   | 86.10%     |
| **Map**                     | 77.30%   |            |
| **Total Accuracy**          | 97.51%   |            |
| **Score_threhold Accuracy** | 42.57%   |            |





## YOLOv5与KNN的结合尝试



<img src="E:\E-CODE\DL\fall_detection\FallDetectionApp\assets\image-20240131130743753.png" alt="image-20240131130743753" style="zoom:67%;" />



设想使用medaipipe对其进行修正。即在置信度大于0.5的框内进行medaipipe的检测，进而提高模型的准确率。

但是需要注意的是，此方法不会提高recall，只能提高precision，因为是在已经识别出来的检测框内进行mediapipe的识别

在medaipipe识别到骨架的情况下，每帧用时200ms左右。



## Reference

[bubbliiiing/yolov5-pytorch: 这是一个YoloV5-pytorch的源码，可以用于训练自己的模型。 (github.com)](https://github.com/bubbliiiing/yolov5-pytorch)
https://github.com/ultralytics/yolov5
