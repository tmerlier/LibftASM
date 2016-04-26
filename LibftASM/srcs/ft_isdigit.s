section .text
	global _ft_isdigit

_ft_isdigit:
	push rbx
	mov ebx, edi
	cmp ebx, '0'
	jge verif
	mov eax, 0
	pop rbx
	ret

verif:
	cmp ebx, '9'
	jle true
	mov eax, 0
	pop rbx
	ret


true:
	mov eax, 1
	pop rbx
	ret
