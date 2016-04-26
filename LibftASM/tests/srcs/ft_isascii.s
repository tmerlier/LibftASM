section .text
	global _ft_isascii

_ft_isascii:
	push rbx
	mov ebx, edi
	cmp ebx, 0
	jge check
	mov eax, 0
	pop rbx
	ret

check:
	cmp ebx, 127
	jle is_true
	mov eax, 0
	pop rbx
	ret

is_true:
	mov eax, 1
	pop rbx
	ret
