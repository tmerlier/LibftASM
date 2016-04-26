section .text
	global _ft_tolower

_ft_tolower:
	push rbx
	mov ebx, edi
	cmp ebx, 65
	jge is_maj
	jl false

false:
	mov eax, ebx
	pop rbx
	ret

is_maj:
	cmp ebx, 90
	jg false
	jl convert

convert:
	add ebx, 32
	mov eax, ebx
	pop rbx
	ret

