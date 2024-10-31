def reverse(str):
    if str == "":
        return str
    else:
        str = reverse(str[1:]) + str[0]
        return str
s = input("Please insert a character string:")
s = reverse(s)
print(s)