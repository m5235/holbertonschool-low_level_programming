section .data

msj db 'Hello, Holberton ',10
msj_length equ 		$ - 	msj			

section .text
	global main		

main:				
	mov rax,1
	mov rdi,1
	mov rsi,msj	
	mov rdx,msj_length
	syscall			

	mov rax,60
	mov rdi,0
	syscall	