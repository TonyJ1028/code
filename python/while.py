t = 114514
g = 0
while g != 114514:
    g = eval(input("Please guess a 6-digit number:"))
    if g < t:
        print ("Lower than correct answer!")
        print("Loser!")
        break
    elif g > t:
        print("Higher than correct answer!")
        print("Loser!")
        break
    else:
        print("Bingo!")
else:
    print("congratulation!")
for i in "Python":
    if i == "t":
        continue
    print(i,end='')        