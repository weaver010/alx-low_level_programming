	global		main
	extern		printf


	section		.text
main:
	mov		edi,s
	mov		eax,0
	call		printf
	ret


	section		.data
s:	db		'Hello, Holberton',0xa,0
