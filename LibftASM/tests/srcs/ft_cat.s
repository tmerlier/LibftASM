%define SYSCALL(nb) 0x2000000 | nb
%define READ 3
%define NBUF 5

section .data
	buf times NBUF db 0
	buffsize equ $ - buf

section .text
	global _ft_cat
	extern _ft_bzero
	extern _ft_putstr

_ft_cat:
	mov rax, SYSCALL(READ)
	lea rsi, [rel buf]
	mov rdx, buffsize
	syscall
	jc end
	cmp rax, 0
	jle end
	push rdi
	mov rdi, rsi
	call _ft_putstr
	mov rdi, rsi
	mov rsi, NBUF
	call _ft_bzero
	pop rdi
	jmp _ft_cat

end:
	ret
