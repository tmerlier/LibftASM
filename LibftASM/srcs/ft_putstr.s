%define SYSCALL(n) 0x2000000 | n
%define STDOUT 1
%define WRITE 4

section .text
	global _ft_putstr
	extern _ft_strlen

_ft_putstr:
	push rbp
	mov rbp, rsp
	mov rbx, rdi

write:
	call _ft_strlen
	mov rdx, rax
	mov rdi, STDOUT
	lea rsi, [rbx]
	mov rax, SYSCALL(WRITE)
	syscall
	jmp end

end:
	pop rbp
	ret
