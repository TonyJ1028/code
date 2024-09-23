def ddu(df):
    ddu = 1.0
    for i in range(365):
        if i % 7 in [6, 0]:
            du = du *(1 - 0.01)
        else:
            du = du * (1 + df)
        return du
dayfact = 0.01
while (ddu(dayfact)<37.78):
    dayfact += 0.001
    print("每天努力的参数是:{:.3f}.".format(dayfact))