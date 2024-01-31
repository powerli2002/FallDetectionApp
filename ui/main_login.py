# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'main_login.ui'
##
## Created by: Qt User Interface Compiler version 5.15.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide2.QtCore import *
from PySide2.QtGui import *
from PySide2.QtWidgets import *


class Ui_Form(object):
    def setupUi(self, Form):
        if not Form.objectName():
            Form.setObjectName(u"Form")
        Form.resize(905, 545)
        self.label = QLabel(Form)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(210, 70, 448, 33))
        font = QFont()
        font.setFamily(u"\u6977\u4f53")
        font.setPointSize(19)
        self.label.setFont(font)
        self.label.setAlignment(Qt.AlignCenter)
        self.label_username = QLabel(Form)
        self.label_username.setObjectName(u"label_username")
        self.label_username.setGeometry(QRect(220, 190, 60, 20))
        font1 = QFont()
        font1.setFamily(u"\u6977\u4f53")
        font1.setPointSize(12)
        self.label_username.setFont(font1)
        self.label_password = QLabel(Form)
        self.label_password.setObjectName(u"label_password")
        self.label_password.setGeometry(QRect(230, 280, 44, 22))
        font2 = QFont()
        font2.setFamily(u"\u6977\u4f53")
        font2.setPointSize(13)
        self.label_password.setFont(font2)
        self.Button_login = QPushButton(Form)
        self.Button_login.setObjectName(u"Button_login")
        self.Button_login.setGeometry(QRect(240, 380, 131, 41))
        self.Button_register = QPushButton(Form)
        self.Button_register.setObjectName(u"Button_register")
        self.Button_register.setGeometry(QRect(480, 380, 141, 41))
        self.lineEdit_uesrname = QLineEdit(Form)
        self.lineEdit_uesrname.setObjectName(u"lineEdit_uesrname")
        self.lineEdit_uesrname.setGeometry(QRect(330, 180, 351, 31))
        self.lineEdit_password = QLineEdit(Form)
        self.lineEdit_password.setObjectName(u"lineEdit_password")
        self.lineEdit_password.setGeometry(QRect(330, 280, 351, 31))

        self.retranslateUi(Form)

        QMetaObject.connectSlotsByName(Form)
    # setupUi

    def retranslateUi(self, Form):
        Form.setWindowTitle(QCoreApplication.translate("Form", u"Form", None))
        self.label.setText(QCoreApplication.translate("Form", u"\u6b22\u8fce\u4f7f\u7528\u8001\u4eba\u8dcc\u5012\u68c0\u6d4b\u76d1\u63a7\u5e73\u53f0", None))
        self.label_username.setText(QCoreApplication.translate("Form", u"\u7528\u6237\u540d", None))
        self.label_password.setText(QCoreApplication.translate("Form", u"\u5bc6\u7801", None))
        self.Button_login.setText(QCoreApplication.translate("Form", u"\u767b\u5f55", None))
        self.Button_register.setText(QCoreApplication.translate("Form", u"\u6ce8\u518c", None))
    # retranslateUi

