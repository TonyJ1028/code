# 题目描述

# 在上一题里， Pile 设置的密码是 'MAKIKAWAYI' ，森森森觉得这个密码过于简单，于是告诉 Pile，怎么样设置一个安全的密码。那什么样的密码才叫安全的呢？一般来说一个比较安全的密码至少应该满足下面两个条件：
# (1).密码长度大于等于 8 ，且不要超过 16。
# (2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。

# 这四个字符类别分别为：
# 1.大写字母：A,B,C...Z;
# 2.小写字母：a,b,c...z;
# 3.数字：0,1,2...9;
# 4.特殊符号：~,!,@,#,$,%,^;

# 然而规则太多了，森森森也有点搞晕了。于是她给你一个密码，她想问你这个密码是不是安全的。

# 输入

# 输入数据第一行包含一个数 M (M ≤ 50) ，接下有 M 行，每行一个密码（长度最大可能为 50 ），密码仅包括上面的四类字符。

# 输出

# 对于每个测试实例，判断这个密码是不是一个安全的密码，是的话输出 YES ，否则输出 NO 。

# 样例输入

# 3
# a1b2c3d4
# Linle@ACM
# ^~^@^@!%

# 样例输出

# NO
# YES
# NO
n = int(input())
passwords = []
for i in range(n):
    passwords.append(input())
for password in passwords:
    if(len(password) < 8 or len(password) > 16):
        print("NO")
        continue
    elif (not any(c.isupper() for c in password) and not any(c.islower() for c in password)) or (not any(c.isupper() for c in password) and not any(c.isdigit() for c in password)) or (not any(c.isupper() for c in password) and not any(c in "~!@#$%^" for c in password)) or (not any(c.islower() for c in password) and not any(c.isdigit() for c in password)) or (not any(c.islower() for c in password) and not any(c in "~!@#$%^" for c in password)) or (not any(c.isdigit() for c in password) and not any(c in "~!@#$%^" for c in password)):
        print("NO")
        continue
    else:
        print("YES")
        continue
