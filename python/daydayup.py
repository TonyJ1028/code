du, df = 1.0, 0.01
for i in range(365):
    if i % 7 in[6, 0]:
        du = du * (1 - df)
    else:
        du = du * (1 + df)
print("一周向上5天的力量:{:.2f}.".format(du))