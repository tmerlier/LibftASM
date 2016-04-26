section .text
	global _ft_isprint

_ft_isprint:
	push rbx
	mov ebx, edi
	cmp ebx, 32
	jge check
	mov eax, 0
	pop rbx
	ret

check:
	cmp ebx, 126
	jle is_true
	mov eax, 0
	pop rbx
	ret

is_true:
	mov eax, 1
	pop rbx
	ret
