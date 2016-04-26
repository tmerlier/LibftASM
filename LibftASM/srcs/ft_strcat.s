section .text
	global _ft_strcat

_ft_strcat:
	push rbp
	mov rbp, rsp
	push rbx
	mov rbx, rdi

while:
	cmp byte [rbx], 0
	je while2
	inc rbx
	jmp while

while2:
	cmp byte [rsi], 0
	je end
	mov al, byte [rsi]
	mov byte [rbx], al
	inc rsi
	inc rbx
	jmp while2

end:
	mov byte [rbx], 0
	mov rax, rdi
	pop rbx
	mov rsp, rbp
	pop rbp
	ret
