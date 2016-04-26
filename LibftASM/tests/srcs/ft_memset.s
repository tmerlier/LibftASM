section .text
global _ft_memset

_ft_memset:
	push rbx
	mov rbx, rdi
	cmp rdi, byte 0
	je return
	cld
	mov al, sil
	mov rcx, rdx
	rep stosb
	jmp return

return:
	mov rax, rbx
	pop rbx
	ret
