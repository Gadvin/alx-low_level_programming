section .data
    hello_msg db 'Hello, Holberton', 10, 0   ; Null-terminated string with newline

section .text
    global main
    extern printf

main:
    push rbp            ; Save the base pointer
    mov rdi, hello_msg  ; Load the address of the string to RDI
    call printf         ; Call the printf function
    add rsp, 8          ; Clean up the stack (8 bytes for the return address and RBP)
    ret                 ; Return from the main function

