	.file	"mario.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Height: \n"
.LC1:
	.string	" "
.LC2:
	.string	"#"
.LC3:
	.string	"  "
.LC4:
	.string	"\n"
	.section	.text.startup,"ax",@progbits
	.globl	main
	.type	main, @function
main:
.LFB16:
	.cfi_startproc
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	pushq	%rcx
	.cfi_def_cfa_offset 48
.L4:
	xorl	%eax, %eax
	movl	$.LC0, %edi
	call	get_int
	cmpl	$23, %eax
	movl	%eax, %ebx
	ja	.L4
	leal	-1(%rax), %r13d
.L3:
	testl	%ebx, %ebx
	je	.L14
	decl	%ebx
	movl	%ebx, %ebp
.L5:
	testl	%ebp, %ebp
	je	.L15
	movl	$.LC1, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	decl	%ebp
	jmp	.L5
.L15:
	movl	%r13d, %ebp
	subl	%ebx, %ebp
	movl	%ebp, %r12d
.L7:
	testl	%r12d, %r12d
	js	.L16
	movl	$.LC2, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	decl	%r12d
	jmp	.L7
.L16:
	movl	$.LC3, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
.L9:
	testl	%ebp, %ebp
	js	.L17
	movl	$.LC2, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	decl	%ebp
	jmp	.L9
.L17:
	movl	$.LC4, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	jmp	.L3
.L14:
	popq	%rdx
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE16:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
