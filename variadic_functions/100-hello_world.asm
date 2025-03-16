section .data
    msg db "Hello, World", 0x0A ; Define the message with a newline character
    len equ $ - msg             ; Calculate the length of the message

section .text
    global _start               ; Define the entry point

_start:
    mov rax, 1                  ; System call number for write (1)
    mov rdi, 1                  ; File descriptor (1 = stdout)
    mov rsi, msg                ; Address of the message
    mov rdx, len                ; Length of the message
    syscall                     ; Invoke the system call

    mov rax, 60                 ; System call number for exit (60)
    xor rdi, rdi                ; Exit status (0)
    syscall                     ; Invoke the system call
