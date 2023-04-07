;101-hello_holberton.asm - file name
;Description: prints Hello, Holberton

section .data
	message db "Hello, Holberton", 0Ah

section .text
	global main
	extern printf

main:
	mov rax, 0
	mov rdi, message
	xor rsi, rsi
	call printf
	mov rax, 0
	ret
