section .data
    message db 'Hello, World!', 0xA  ; 我们要输出的字符串，以换行符结尾
    message_len equ $ - message       ; 计算字符串长度

section .text
    global _start

_start:
    ; 系统调用号 (sys_write 是 1)
    mov eax, 4            ; sys_write
    mov ebx, 1            ; 文件描述符 1 是 stdout
    mov ecx, message      ; 字符串地址
    mov edx, message_len  ; 字符串长度
    int 0x80              ; 调用内核中断

    ; 退出程序 (sys_exit 是 60)
    mov eax, 1            ; sys_exit
    xor ebx, ebx          ; 返回状态 0
    int 0x80              ; 调用内核中断
