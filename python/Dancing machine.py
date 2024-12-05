# 题目描述
# 有一个跳舞机的后台判分程序需要你来完成。
# 用 WSAD 表示跳舞机的四个方向。
# 给分方式是踩对方向获得 20 分，踩错方向在当前的基础上扣 10 分，若分数为 0 则不会继续扣分（即不存在负分）。
# 现在第一行是跳舞机满分的步骤，第二行是用户的步骤。请你计算出用户的得分。
# 输入
# 输入两行，如题意所示。
# 输出
# 输出一行表示得分。
# 样例输入
# WASDWWSAD
# WASSWWAAD
# 样例输出
# 120
# 提示
# 注意，不存在负分是指在每一步都不存在负分，如果当前分数不够扣，则不会扣分。如果当前分数刚好够扣，则进行扣分。
str_answer = input()
str_input = input()

score = 0
for i in range(len(str_input)):
    if str_input[i] == str_answer[i]:
        score += 20
    else:
        if (score - 10) < 0:
            continue
        else:
            score -= 10
print(score)