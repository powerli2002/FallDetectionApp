# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'main.ui'
##
## Created by: Qt User Interface Compiler version 5.15.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide2.QtCore import *
from PySide2.QtGui import *
from PySide2.QtWidgets import *


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(936, 685)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.horizontalLayout_4 = QHBoxLayout(self.centralwidget)
        self.horizontalLayout_4.setObjectName(u"horizontalLayout_4")
        self.verticalLayout_3 = QVBoxLayout()
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        font = QFont()
        font.setFamily(u"\u534e\u6587\u4e2d\u5b8b")
        font.setPointSize(16)
        self.label.setFont(font)
        self.label.setTextFormat(Qt.AutoText)
        self.label.setScaledContents(False)
        self.label.setAlignment(Qt.AlignCenter)
        self.label.setMargin(0)
        self.label.setOpenExternalLinks(False)

        self.verticalLayout_3.addWidget(self.label)

        self.horizontalLayout_3 = QHBoxLayout()
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.verticalLayout_2 = QVBoxLayout()
        self.verticalLayout_2.setSpacing(0)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.label_flag = QLabel(self.centralwidget)
        self.label_flag.setObjectName(u"label_flag")
        self.label_flag.setMinimumSize(QSize(0, 100))
        font1 = QFont()
        font1.setFamily(u"\u534e\u6587\u7425\u73c0")
        font1.setPointSize(35)
        font1.setBold(True)
        font1.setItalic(False)
        font1.setUnderline(False)
        font1.setWeight(75)
        self.label_flag.setFont(font1)

        self.verticalLayout_2.addWidget(self.label_flag)

        self.textBrowser = QTextBrowser(self.centralwidget)
        self.textBrowser.setObjectName(u"textBrowser")
        self.textBrowser.setMinimumSize(QSize(0, 0))

        self.verticalLayout_2.addWidget(self.textBrowser)

        self.verticalLayout_2.setStretch(0, 1)
        self.verticalLayout_2.setStretch(1, 9)

        self.horizontalLayout_3.addLayout(self.verticalLayout_2)

        self.verticalLayout = QVBoxLayout()
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.horizontalLayout = QHBoxLayout()
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.comboBox = QComboBox(self.centralwidget)
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.setObjectName(u"comboBox")
        self.comboBox.setMinimumSize(QSize(30, 20))

        self.horizontalLayout.addWidget(self.comboBox)

        self.Button_init = QPushButton(self.centralwidget)
        self.Button_init.setObjectName(u"Button_init")
        self.Button_init.setMinimumSize(QSize(100, 30))
        self.Button_init.setMaximumSize(QSize(500, 500))

        self.horizontalLayout.addWidget(self.Button_init)

        self.Button_video = QPushButton(self.centralwidget)
        self.Button_video.setObjectName(u"Button_video")
        self.Button_video.setMinimumSize(QSize(100, 30))
        self.Button_video.setMaximumSize(QSize(500, 500))

        self.horizontalLayout.addWidget(self.Button_video)

        self.Button_camera = QPushButton(self.centralwidget)
        self.Button_camera.setObjectName(u"Button_camera")
        self.Button_camera.setMinimumSize(QSize(100, 30))
        self.Button_camera.setMaximumSize(QSize(500, 500))

        self.horizontalLayout.addWidget(self.Button_camera)

        self.Button_photo = QPushButton(self.centralwidget)
        self.Button_photo.setObjectName(u"Button_photo")
        self.Button_photo.setMinimumSize(QSize(100, 30))
        self.Button_photo.setMaximumSize(QSize(500, 500))

        self.horizontalLayout.addWidget(self.Button_photo)


        self.verticalLayout.addLayout(self.horizontalLayout)

        self.label_display = QLabel(self.centralwidget)
        self.label_display.setObjectName(u"label_display")
        font2 = QFont()
        font2.setFamily(u"Verdana")
        self.label_display.setFont(font2)
        self.label_display.setStyleSheet(u"")
        self.label_display.setMargin(0)

        self.verticalLayout.addWidget(self.label_display)

        self.horizontalLayout_2 = QHBoxLayout()
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.Button_stop = QPushButton(self.centralwidget)
        self.Button_stop.setObjectName(u"Button_stop")
        self.Button_stop.setMinimumSize(QSize(200, 35))
        self.Button_stop.setMaximumSize(QSize(800, 35))

        self.horizontalLayout_2.addWidget(self.Button_stop)

        self.Button_over = QPushButton(self.centralwidget)
        self.Button_over.setObjectName(u"Button_over")
        self.Button_over.setMinimumSize(QSize(200, 35))
        self.Button_over.setMaximumSize(QSize(800, 35))

        self.horizontalLayout_2.addWidget(self.Button_over)

        self.Button_exit = QPushButton(self.centralwidget)
        self.Button_exit.setObjectName(u"Button_exit")
        self.Button_exit.setMinimumSize(QSize(200, 35))
        self.Button_exit.setMaximumSize(QSize(800, 35))

        self.horizontalLayout_2.addWidget(self.Button_exit)


        self.verticalLayout.addLayout(self.horizontalLayout_2)

        self.verticalLayout.setStretch(0, 1)
        self.verticalLayout.setStretch(1, 9)
        self.verticalLayout.setStretch(2, 1)

        self.horizontalLayout_3.addLayout(self.verticalLayout)

        self.horizontalLayout_3.setStretch(0, 1)
        self.horizontalLayout_3.setStretch(1, 3)

        self.verticalLayout_3.addLayout(self.horizontalLayout_3)


        self.horizontalLayout_4.addLayout(self.verticalLayout_3)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 936, 26))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"\u8001\u4eba\u8dcc\u5012\u68c0\u6d4b\u76d1\u63a7\u5e73\u53f0", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"\u8001\u4eba\u8dcc\u5012\u68c0\u6d4b\u76d1\u63a7\u5e73\u53f0", None))
        self.label_flag.setText(QCoreApplication.translate("MainWindow", u"\u6b63\u5e38", None))
        self.comboBox.setItemText(0, QCoreApplication.translate("MainWindow", u"\u65e0\u6a21\u578b", None))
        self.comboBox.setItemText(1, QCoreApplication.translate("MainWindow", u"KNN\u6a21\u578b", None))
        self.comboBox.setItemText(2, QCoreApplication.translate("MainWindow", u"YOLO\u6a21\u578b", None))
        self.comboBox.setItemText(3, QCoreApplication.translate("MainWindow", u"YOLO+KNN", None))

        self.Button_init.setText(QCoreApplication.translate("MainWindow", u"\u521d\u59cb\u5316\u6a21\u578b", None))
        self.Button_video.setText(QCoreApplication.translate("MainWindow", u"\u89c6\u9891\u68c0\u6d4b", None))
        self.Button_camera.setText(QCoreApplication.translate("MainWindow", u"\u6444\u50cf\u5934\u6355\u6349", None))
        self.Button_photo.setText(QCoreApplication.translate("MainWindow", u"\u56fe\u7247\u68c0\u6d4b", None))
        self.label_display.setText("")
        self.Button_stop.setText(QCoreApplication.translate("MainWindow", u"\u6682\u505c/\u7ee7\u7eed", None))
        self.Button_over.setText(QCoreApplication.translate("MainWindow", u"\u7ed3\u675f\u68c0\u6d4b", None))
        self.Button_exit.setText(QCoreApplication.translate("MainWindow", u"\u9000\u51fa\u5e73\u53f0", None))
    # retranslateUi

