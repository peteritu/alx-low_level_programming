section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Call printf
    mov rdi, hello ; Format string address
    mov rax, 0     ; RAX is set to 0 for printf
    call printf

    ; Exit the program
    mov rax, 60    ; syscall: exit
    xor rdi, rdi   ; status: 0
    syscall

