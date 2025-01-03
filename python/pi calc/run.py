import picalc
import picalc_compile
import time
import printf
import printf_compile

def main():
    start_time = time.time()
    print(picalc.picalc(eval(input())))
    print(f"time{time.time() - start_time}")

    start_time = time.time()
    print(picalc_compile.picalc(eval(input())))
    print(f"time{time.time() - start_time}")

    start_time = time.time()
    printf.printf()
    print(f"time{time.time() - start_time}")

    start_time = time.time()
    printf_compile.printf()
    print(f"time{time.time() - start_time}")

if __name__ == "__main__":
    main()
