secretcode = input("请输入明文: ")
for p in secretcode:
    if ord("a") <= ord(p) <= ord("z"):
        print(chr(ord("a") + (ord(p) - ord("a") - 3)%26),end='')
    else:
        print(p, end='')