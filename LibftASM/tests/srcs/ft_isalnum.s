section .text
	global _ft_isalnum

_ft_isalnum:
	push rbx
	mov ebx, edi
	cmp ebx, 'a'
	jge min_alpha
	cmp ebx, 'A'
	jge maj_alpha
	cmp ebx, '0'
	jge digit
	mov eax, 0
	pop rbx
	ret

min_alpha:
	cmp ebx, 'z'
	jle true
	mov eax, 0
	pop rbx
	ret

maj_alpha:
	cmp ebx, 'Z'
	jle true
	mov eax, 0
	pop rbx
	ret

digit:
	cmp ebx, '9'
	jle true
	mov eax, 0
	pop rbx
	ret

true:
	mov eax, 1
	pop rbx
	ret
