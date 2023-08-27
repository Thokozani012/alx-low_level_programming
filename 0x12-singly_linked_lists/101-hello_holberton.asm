section .data
	format db "Hello, Holberton", 10, 0 ; 10 represents newline (\n)

section .text
	global main
	extern printf

main:
	sub rsp, 8	; Align the stack

	mov rdi, format ; Load the address of the format string
	call printf	; Call the printf function


	add rsp, 8	; Restore the stack

	mov eax, 0	; Return 0 from the main function
	ret
