section .text
global _ft_memcpy

_ft_memcpy:
	push rbx
	mov rbx, rdi
	cmp rdi, byte 0
	je return
	cmp rsi, byte 0
	je return
	cld
	mov rcx, rdx
	rep movsb
	jmp return

return:
	mov rax, rbx
	pop rbx
	ret
