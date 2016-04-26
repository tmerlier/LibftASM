section .text
	global _ft_isalpha

_ft_isalpha:
	push rbx
	mov ebx, edi
	cmp ebx, 65
	jge is_maj
	jl is_false

is_maj:
	cmp ebx, 90
	jle is_true
	jg is_not_maj

is_not_maj:
	cmp ebx, 97
	jge is_min
	jl is_false

is_min:
	cmp ebx, 122
	jle is_true
	jg is_false

is_false:
	mov eax, 0
	pop rbx
	ret

is_true:
	mov eax, 1
	pop rbx
	ret
