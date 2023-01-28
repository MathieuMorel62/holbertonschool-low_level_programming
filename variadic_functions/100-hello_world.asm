section .data
    hello db 'Hello, World',10

section .text
    global _start

_start:
    ; write(1, hello, 12)
    mov edx, 12    ; message length
    mov ecx, hello ; message to write
    mov ebx, 1     ; file descriptor (stdout)
    mov eax, 4     ; system call for sys_write
    int 0x80       ; call kernel

    ; exit(0)
    mov eax, 1     ; system call for sys_exit
    xor ebx, ebx   ; exit status (0)
    int 0x80       ; call kernel
