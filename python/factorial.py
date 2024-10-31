def fact(n):
    if n == 0:
        return 1
    else:
        n = n * fact(n-1)
        return n
num = eval(input("Please insert a number:"))
num = fact(num)
print(num)