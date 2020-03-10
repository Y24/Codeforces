	.file	"C.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.globl	buffer
	.bss
	.align 32
	.type	buffer, @object
	.size	buffer, 1600160
buffer:
	.zero	1600160
	.globl	res
	.align 32
	.type	res, @object
	.size	res, 800080
res:
	.zero	800080
	.globl	testNumber
	.align 4
	.type	testNumber, @object
	.size	testNumber, 4
testNumber:
	.zero	4
	.text
	.globl	_Z5solvell
	.type	_Z5solvell, @function
_Z5solvell:
.LFB1952:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	cmpq	$0, -48(%rbp)
	jne	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	movq	-48(%rbp), %rax
	cmpq	-40(%rbp), %rax
	jne	.L4
	movq	-40(%rbp), %rax
	addq	$1, %rax
	imulq	-40(%rbp), %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	jmp	.L3
.L4:
	movq	-40(%rbp), %rax
	subq	-48(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-48(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	cqto
	idivq	-24(%rbp)
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rax
	cqto
	idivq	-24(%rbp)
	movq	%rdx, -8(%rbp)
	movq	-40(%rbp), %rax
	addq	$1, %rax
	imulq	-40(%rbp), %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, %rcx
	movq	-16(%rbp), %rax
	addq	$1, %rax
	imulq	-16(%rbp), %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	subq	-8(%rbp), %rax
	imulq	%rdx, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	movq	-16(%rbp), %rax
	leaq	2(%rax), %rcx
	movq	-16(%rbp), %rax
	addq	$1, %rax
	imulq	%rcx, %rax
	movq	%rax, %rcx
	shrq	$63, %rcx
	addq	%rcx, %rax
	sarq	%rax
	imulq	-8(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1952:
	.size	_Z5solvell, .-_Z5solvell
	.globl	main
	.type	main, @function
main:
.LFB1953:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	testNumber(%rip), %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	movl	$0, -12(%rbp)
.L7:
	movl	testNumber(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jge	.L6
	movl	-12(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	buffer(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERl@PLT
	movq	%rax, %rcx
	movl	-12(%rbp), %eax
	cltq
	salq	$4, %rax
	leaq	8(%rax), %rdx
	leaq	buffer(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movq	%rcx, %rdi
	call	_ZNSirsERl@PLT
	addl	$1, -12(%rbp)
	jmp	.L7
.L6:
	movl	$0, -8(%rbp)
.L9:
	movl	testNumber(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L8
	movl	-8(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rdx
	leaq	8+buffer(%rip), %rax
	movq	(%rdx,%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$4, %rax
	movq	%rax, %rcx
	leaq	buffer(%rip), %rax
	movq	(%rcx,%rax), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z5solvell
	movq	%rax, %rcx
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	res(%rip), %rax
	movq	%rcx, (%rdx,%rax)
	addl	$1, -8(%rbp)
	jmp	.L9
.L8:
	movl	$0, -4(%rbp)
.L11:
	movl	testNumber(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L10
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	res(%rip), %rax
	movq	(%rdx,%rax), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEl@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	addl	$1, -4(%rbp)
	jmp	.L11
.L10:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1953:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2441:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L15
	cmpl	$65535, -8(%rbp)
	jne	.L15
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L15:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2441:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_buffer, @function
_GLOBAL__sub_I_buffer:
.LFB2442:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2442:
	.size	_GLOBAL__sub_I_buffer, .-_GLOBAL__sub_I_buffer
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_buffer
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
