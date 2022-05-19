; hello_world.asm 
;
; Author: Kaio Roque
; Date: 17-May-2022

global _start

_start:
section .text
	mov eax, 0x4
	mov ebx, 1
	mov ecx, msg
	mov edx, msg_len
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x80

section .data
	msg: db "Hello, world!", 0xA
	msg_len equ $-msg
 
