global _start

section .data
    first db "Nikunj", 0Ah        ; 0Ah = newline
    first_len equ $ - first        ; Length of first string

    last db "Hogade", 0Ah
    last_len equ $ - last          ; Length of last string

section .text
_start:
    ; Print the first string ("Nikunj")
    mov eax, 4                  ; syscall number for sys_write
    mov ebx, 1                  ; file descriptor (stdout)
    mov ecx, first              ; address of the first string
    mov edx, first_len          ; length of the first string
    int 0x80                    ; make the syscall

    ; Print the second string ("Hogade")
    mov eax, 4                  ; syscall number for sys_write
    mov ebx, 1                  ; file descriptor (stdout)
    mov ecx, last               ; address of the second string
    mov edx, last_len           ; length of the second string
    int 0x80                    ; make the syscall

    ; Exit the program
    mov eax, 1                  ; syscall number for sys_exit
    xor ebx, ebx                ; return code 0
    int 0x80                    ; make the syscall

