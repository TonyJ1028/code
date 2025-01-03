def main():
    a = input()
    if not a.isdigit():
        print("Error!")
        return
    else:
        a = int(a)
    if(a < 0 or a > 100):
        print("Error!")
        return
    print("A"if a >= 90 else "B"if a >= 80 else "C"if a >= 70 else "D"if a >= 60 else "F")
    return
if __name__ == "__main__":
    main()
