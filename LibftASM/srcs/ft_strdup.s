section .text
	global _ft_strdup

extern _ft_strlen
extern _malloc

_ft_strdup:
	push rbx
	mov rbx, rdi
	cmp rdi, 0
	je return0
	call _ft_strlen
	mov rdi, rax
	mov rcx, rax
	add rdi, 1
	push rdi
	call _malloc
	mov rdi, rax
	mov rsi, rbx
	pop rcx
	cld
	rep movsb
	jmp return

return:
	pop rdi
	ret

return0:
	mov rax, 0
	leave
	ret
