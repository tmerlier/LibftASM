section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov rbx, rdi

while:
	cmp rsi, 0
	je end
	mov byte [rbx], 0
	inc rbx
	dec rsi
	jmp while

end:
	mov rax, rbx
	pop rbp
	ret
