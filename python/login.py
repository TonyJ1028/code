#题目描述

#给用户三次输入用户名和密码的机会，要求如下：
#1）如输入第一行输入用户名为 'Pile' ,第二行输入密码为 'MAKIKAWAYI'，输出 'SUCCESS'，退出程序；
#2）当一共有3次输入用户名或密码不正确输出 'FAILED'。

#输入

#输入最多 6 行。
#每两行表示一组测试数据，其中第一行表示账号，第二行表示密码。
#保证最后一定能输出结果。

#输出

#输出一行 'SUCCESS' 或者 'FAILED' ，表示登录成功或者失败。
corr_user_name = "Pile"
corr_Password = "MAKIKAWAYI"

i = 0
while i < 3:
    uesr_name = input()
    password = input()
    if uesr_name == corr_user_name and password == corr_Password:
        print("SUCCESS")
        break
    else:
        i += 1
if i == 3:
    print("FAILED")
    