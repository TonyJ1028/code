pc = input("please insert the plaincode:")
for p in pc:
    if ord("a") <= ord(p) <=ord("z"):
        print(chr(ord("a") + (ord(p) - ord("a")+3)%26), end='')
    else:
        print(p, end='')
        