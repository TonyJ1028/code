passage = []
pass_num = 0
try:
    while True:
        passage.append(input())
        pass_num += 1
except EOFError:
    pass

digit = 0
letter = 0
space = 0
other = 0

for i in range(pass_num):
    for j in passage[i]:
        if j.isdigit():
            digit += 1
        elif j.isalpha():
            letter += 1
        elif j.isspace():
            space += 1
        else:
            other += 1
print("%d spaces, %d numbers, %d letters, and %d others" % (space, digit, letter, other))