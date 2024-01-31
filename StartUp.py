import datetime
import sys

from PySide2 import QtWidgets
from PySide2.QtWidgets import QApplication

from ui.main_login import Ui_Form
from predict import UI_mainwindow

import csv
import qtawesome as qta
import qtmodern.styles
import qtmodern.windows


class shareInfo:
    '''
    存取公用的界面名 # 参考自白月黑羽 www.python3.vip
    '''
    mainWin = None
    loginWin = None
    createWin = None


# 写入账户信息到csv文件
def sava_id_info(user, pwd):
    headers = ['name', 'key']
    values = [{'name':user, 'key':pwd}]
    with open('userInfo.csv', 'a', encoding='utf-8', newline='') as fp:
        writer = csv.DictWriter(fp, headers)
        writer.writerows(values)

# 读取csv文件获得账户信息
def get_id_info():
    USER_PWD = {}
    with open('userInfo.csv', 'r') as csvfile: # 此目录即是当前项目根目录
        spamreader = csv.reader(csvfile)
        # 逐行遍历csv文件,按照字典存储用户名与密码
        for row in spamreader:
            USER_PWD[row[0]] = row[1]
    return USER_PWD



class UI_login(QtWidgets.QMainWindow):
    def __init__(self, parent = None):
        super(UI_login, self).__init__(parent)
        self.ui_login = Ui_Form()
        self.ui_login.setupUi(self)
        self.init_slots()
        self.hidden_pwd()


        # 密码输入框隐藏
    def hidden_pwd(self):
        self.ui_login.lineEdit_password.setEchoMode(QtWidgets.QLineEdit.Password)


    # 绑定信号槽
    def init_slots(self):
        self.ui_login.Button_login.clicked.connect(self.SignIn) # 点击按钮登录
        self.ui_login.Button_register.clicked.connect(self.Register) #注册
        self.ui_login.lineEdit_password.returnPressed.connect(self.SignIn) # 按下回车登录
        # self.ui_login.Button_login.clicked.connect()


    # 保存登录日志
    def sava_login_log(self, username):
        with open('login_log.txt', 'a', encoding='utf-8') as f:
            f.write(username + '\t log in at' + datetime.now().strftimestrftime+ '\r')


    def SignIn(self):
        print("You pressed sign in")
        # 从登陆界面获得输入账户名与密码
        username = self.ui_login.lineEdit_uesrname.text().strip()
        password = self.ui_login.lineEdit_password.text().strip()

        # 获得账号信息
        USER_PWD = get_id_info()
        # print(USER_PWD)

        if username not in USER_PWD.keys():
            QtWidgets.QMessageBox.warning(self,"登陆失败!", "账号或密码输入错误", QtWidgets.QMessageBox.Yes)
        else:
            # 若登陆成功，则跳转主界面
            if USER_PWD.get(username) == password:
                print("Jump to main window")
                # # 实例化新窗口
                # # 写法1：
                # self.ui_new = win_Main()
                # # 显示新窗口
                # self.ui_new.show()

                # 写法2：
                # 不用self.ui_new,因为这个子窗口不是从属于当前窗口,写法不好
                # 所以使用公用变量名
                shareInfo.mainWin = UI_mainwindow()
                qtmodern.styles.light(app)
                shareInfo.mainWin = qtmodern.windows.ModernWindow(shareInfo.mainWin)
                shareInfo.mainWin.setWindowIcon(qta.icon('ri.robot-line', color='black'))

                shareInfo.mainWin.setWindowTitle('老人跌倒检测监控平台')
                shareInfo.mainWin.show()
                # 关闭当前窗口
                self.close()
            else:
                QtWidgets.QMessageBox.warning(self, "!", "账号或密码输入错误", QtWidgets.QMessageBox.Yes)


    def Register(self):
        print("Create new account")
        USER_PWD = get_id_info()
        # print(USER_PWD)
        new_username = self.ui_login.lineEdit_uesrname.text().strip()
        new_password = self.ui_login.lineEdit_password.text().strip()
        # 判断用户名是否为空
        if new_username == "":
            replay = QtWidgets.QMessageBox.warning(self, "!", "账号不准为空", QtWidgets.QMessageBox.Yes)
        else:
            # 判断账号是否存在
            if new_username in USER_PWD.keys():
                replay = QtWidgets.QMessageBox.warning(self, "!", "账号已存在", QtWidgets.QMessageBox.Yes)
            else:
                # 判断密码是否为空
                if new_password == "":
                    replay = QtWidgets.QMessageBox.warning(self, "!", "密码不能为空", QtWidgets.QMessageBox.Yes)
                else:
                    # 注册成功
                    print("Successful!")
                    sava_id_info(new_username, new_password)
                    replay = QtWidgets.QMessageBox.warning(self,  "!", "注册成功！", QtWidgets.QMessageBox.Yes)





if __name__ == "__main__":
    app = QApplication(sys.argv)
    # 利用共享变量名来实例化对象
    ui_login = UI_login() # 登录界面作为主界面
    qtmodern.styles.light(app)
    ui_login = qtmodern.windows.ModernWindow(ui_login)
    ui_login.setWindowIcon(qta.icon('ri.robot-line', color='black'))

    ui_login.setWindowTitle('老人跌倒检测监控平台')
    ui_login.show()
    sys.exit(app.exec_())
