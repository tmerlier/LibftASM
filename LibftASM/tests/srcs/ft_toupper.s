section .text
	global _ft_toupper

_ft_toupper:
	push rbx
	mov ebx, edi
	cmp ebx, 97
	jge is_min
	jl false

false:
	mov eax, ebx
	pop rbx
	ret

is_min:
	cmp ebx, 122
	jg false
	jl convert

convert:
	sub ebx, 32
	mov eax, ebx
	pop rbx
	ret
