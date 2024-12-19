# 题目描述
# 森森想知道 1! + 2! + ... + n!，请你帮她计算一下吧。
# 输入
# 输入一行一个整数 n, 表示上文的 n
# 输出
# 输出一个整数表示结果
from math import factorial
n = eval(input())
sum = 0
if n == 0:
    sum = 1
for i in range(n):
    j = i + 1
    sum += factorial(j)
print(sum)
