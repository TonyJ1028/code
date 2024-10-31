def fibo(f):
    if f == 0 or f == 1:
        return 1
    else:
        return fibo(f-2) + fibo(f-1)
n = eval(input("Please insert the number of the items:"))
for i in range(n):
    print(fibo(i) , end = " ")
