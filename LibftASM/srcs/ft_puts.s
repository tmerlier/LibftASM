%define SYSCALL(n) 0x2000000 | n
%define STDOUT 1
%define WRITE 4

section .data
	nul db "(null)"
	n db 10

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rbp
	mov rbp, rsp
	mov rbx, rdi

check:
	cmp rdi, 0
	je write_null
	jmp write

write:
	call _ft_strlen
	mov rdx, rax
	mov rdi, STDOUT
	lea rsi, [rbx]
	mov rax, SYSCALL(WRITE)
	syscall
	jmp end

write_null:
	mov rdx, 6
	mov rdi, STDOUT
	lea rsi, [rel nul]
	mov rax, SYSCALL(WRITE)
	syscall
	jmp end

end:
	mov rdx, 1
	mov rdi, STDOUT
	lea rsi, [rel n]
	mov rax, SYSCALL(WRITE)
	syscall
	mov rax, 1
	pop rbp
	ret
