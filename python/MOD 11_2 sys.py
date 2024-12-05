#一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：
#首先对前17位数字加权求和，权重分配为：
#[7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2];
#然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：
#Z：0 1 2 3 4 5 6 7 8 9 10
#M：1 0 X 9 8 7 6 5 4 3 2
#现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。

#输入

#输入第一行给出正整数N（≤100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。

#输出

#按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出All passed。

#样例输入

#4
#320124198808240056
#12010X198901011234
#110108196711301866
#37070419881216001X

#样例输出

#12010X198901011234
#110108196711301866
#37070419881216001X

num = int(input())
idnum = []
i = 0
digits = "1234567890"
wrong_idnum = []
weight = [7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2]
m = ['1','0','X','9','8','7','6','5','4','3','2']

for i in range(num):
    idnum.append(input())

for i in idnum:

    if not all(c in digits for c in i[:-1]):
        wrong_idnum.append(i)
        continue
    
    weighted_sum = sum(int(i[j]) * weight[j] for j in range(17))

    mod = weighted_sum % 11
    if (i[-1] != m[mod]):
        if i in wrong_idnum:
            continue
        else:
            wrong_idnum.append(i)

if wrong_idnum == []:
    print("All Passed")
else:
    for i in wrong_idnum:
        print(i)