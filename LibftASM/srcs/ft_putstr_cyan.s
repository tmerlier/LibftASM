section .data
    color db 27, "[36m", 0
    res db 27, "[0m", 0

section .text
    global _ft_putstr_cyan
    extern _ft_putstr

_ft_putstr_cyan:
    push rbp
    mov rbp, rsp
    push rdi

write1:
    lea rdi, [rel color]
    call _ft_putstr

write:
    pop rdi
    call _ft_putstr

write_res:
    lea rdi, [rel res]
    call _ft_putstr

end:
    pop rbp
    ret
