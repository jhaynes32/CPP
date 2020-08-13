	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3
LCPI0_0:
	.quad	4607182418800017408     ## double 1
LCPI0_1:
	.quad	4602678819172646912     ## double 0.5
LCPI0_2:
	.quad	4532020583610935537     ## double 1.0000000000000001E-5
LCPI0_3:
	.quad	4591870180066957722     ## double 0.10000000000000001
LCPI0_4:
	.quad	4696837146684686336     ## double 1.0E+6
LCPI0_5:
	.quad	4576918229304087675     ## double 0.01
LCPI0_6:
	.quad	4652007308841189376     ## double 1000
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%rbx
	pushq	%rax
Lcfi3:
	.cfi_offset %rbx, -40
Lcfi4:
	.cfi_offset %r14, -32
Lcfi5:
	.cfi_offset %r15, -24
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rbx
	leaq	L_.str(%rip), %rsi
	movq	%rbx, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	leaq	L_.str.1(%rip), %rsi
	movq	%rbx, %rdi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	movq	__ZNSt3__13cinE@GOTPCREL(%rip), %rdi
	leaq	_num(%rip), %rsi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd
	movsd	_num(%rip), %xmm2       ## xmm2 = mem[0],zero
	xorpd	%xmm0, %xmm0
	ucomisd	%xmm2, %xmm0
	jbe	LBB0_4
## BB#1:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	leaq	L_.str.2(%rip), %rsi
	callq	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	movq	%rax, %rbx
	movq	(%rbx), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
	leaq	-32(%rbp), %r14
	movq	%r14, %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp0:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%r14, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp1:
## BB#2:
	movq	(%rax), %rcx
Ltmp2:
	movl	$10, %esi
	movq	%rax, %rdi
	callq	*56(%rcx)
	movl	%eax, %r14d
Ltmp3:
## BB#3:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movsbl	%r14b, %esi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movsd	_num(%rip), %xmm2       ## xmm2 = mem[0],zero
LBB0_4:
	movabsq	$4607182418800017408, %r15 ## imm = 0x3FF0000000000000
	movq	%r15, _LG(%rip)
	ucomisd	LCPI0_0(%rip), %xmm2
	jbe	LBB0_5
## BB#9:
	movsd	LCPI0_0(%rip), %xmm6    ## xmm6 = mem[0],zero
	movsd	_num(%rip), %xmm1       ## xmm1 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm3    ## xmm3 = mem[0],zero
	movsd	LCPI0_2(%rip), %xmm4    ## xmm4 = mem[0],zero
	movsd	LCPI0_3(%rip), %xmm5    ## xmm5 = mem[0],zero
	.p2align	4, 0x90
LBB0_10:                                ## =>This Inner Loop Header: Depth=1
	divsd	%xmm6, %xmm2
	addsd	%xmm6, %xmm2
	movapd	%xmm2, %xmm0
	mulsd	%xmm3, %xmm0
	movapd	%xmm0, %xmm7
	subsd	_LG(%rip), %xmm7
	ucomisd	%xmm7, %xmm4
	ja	LBB0_11
## BB#16:                               ##   in Loop: Header=BB0_10 Depth=1
	movsd	_LG(%rip), %xmm6        ## xmm6 = mem[0],zero
	addsd	%xmm5, %xmm6
	movsd	%xmm6, _LG(%rip)
	ucomisd	%xmm6, %xmm1
	movapd	%xmm1, %xmm2
	ja	LBB0_10
## BB#17:
	movsd	%xmm0, _NG(%rip)
	movsd	%xmm7, _approx(%rip)
	jmp	LBB0_18
LBB0_5:
	movapd	%xmm2, %xmm1
	jmp	LBB0_18
LBB0_11:
	movsd	%xmm0, _NG(%rip)
	movsd	%xmm7, _approx(%rip)
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
	movq	%rax, %rbx
	movq	(%rbx), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
	leaq	-32(%rbp), %r14
	movq	%r14, %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp8:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%r14, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp9:
## BB#12:
	movq	(%rax), %rcx
Ltmp10:
	movl	$10, %esi
	movq	%rax, %rdi
	callq	*56(%rcx)
	movl	%eax, %r14d
Ltmp11:
## BB#13:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movsbl	%r14b, %esi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movsd	_num(%rip), %xmm1       ## xmm1 = mem[0],zero
LBB0_18:
	xorpd	%xmm0, %xmm0
	ucomisd	%xmm0, %xmm1
	jne	LBB0_22
	jp	LBB0_22
## BB#19:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	xorl	%esi, %esi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
	movq	%rax, %rbx
	movq	(%rbx), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
	leaq	-32(%rbp), %r14
	movq	%r14, %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp16:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%r14, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp17:
## BB#20:
	movq	(%rax), %rcx
Ltmp18:
	movl	$10, %esi
	movq	%rax, %rdi
	callq	*56(%rcx)
	movl	%eax, %r14d
Ltmp19:
## BB#21:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movsbl	%r14b, %esi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
LBB0_22:
	movsd	_num(%rip), %xmm0       ## xmm0 = mem[0],zero
	movsd	LCPI0_0(%rip), %xmm2    ## xmm2 = mem[0],zero
	ucomisd	%xmm0, %xmm2
	jbe	LBB0_33
## BB#23:
	mulsd	LCPI0_4(%rip), %xmm0
	movsd	%xmm0, _num(%rip)
	movq	%r15, _LG(%rip)
	ucomisd	LCPI0_0(%rip), %xmm0
	jbe	LBB0_40
## BB#24:
	movsd	_num(%rip), %xmm3       ## xmm3 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm4    ## xmm4 = mem[0],zero
	movsd	LCPI0_2(%rip), %xmm5    ## xmm5 = mem[0],zero
	movsd	LCPI0_5(%rip), %xmm6    ## xmm6 = mem[0],zero
	.p2align	4, 0x90
LBB0_25:                                ## =>This Inner Loop Header: Depth=1
	divsd	%xmm2, %xmm0
	addsd	%xmm2, %xmm0
	movapd	%xmm0, %xmm1
	mulsd	%xmm4, %xmm1
	movapd	%xmm1, %xmm7
	subsd	_LG(%rip), %xmm7
	ucomisd	%xmm7, %xmm5
	ja	LBB0_26
## BB#38:                               ##   in Loop: Header=BB0_25 Depth=1
	movsd	_LG(%rip), %xmm2        ## xmm2 = mem[0],zero
	addsd	%xmm6, %xmm2
	movsd	%xmm2, _LG(%rip)
	ucomisd	%xmm2, %xmm3
	movapd	%xmm3, %xmm0
	ja	LBB0_25
## BB#39:
	movsd	%xmm1, _NG(%rip)
	movsd	%xmm7, _approx(%rip)
	jmp	LBB0_40
LBB0_33:
	ucomisd	LCPI0_0(%rip), %xmm0
	jne	LBB0_40
	jp	LBB0_40
## BB#34:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
	movq	%rax, %rbx
	movq	(%rbx), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
	leaq	-32(%rbp), %r14
	movq	%r14, %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp24:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%r14, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp25:
## BB#35:
	movq	(%rax), %rcx
Ltmp26:
	movl	$10, %esi
	movq	%rax, %rdi
	callq	*56(%rcx)
	movl	%eax, %r14d
Ltmp27:
	jmp	LBB0_28
LBB0_26:
	movsd	%xmm1, _NG(%rip)
	movsd	%xmm7, _approx(%rip)
	divsd	LCPI0_6(%rip), %xmm1
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	movapd	%xmm1, %xmm0
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
	movq	%rax, %rbx
	movq	(%rbx), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
	leaq	-32(%rbp), %r14
	movq	%r14, %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp32:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	movq	%r14, %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp33:
## BB#27:
	movq	(%rax), %rcx
Ltmp34:
	movl	$10, %esi
	movq	%rax, %rdi
	callq	*56(%rcx)
	movl	%eax, %r14d
Ltmp35:
LBB0_28:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movsbl	%r14b, %esi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
LBB0_40:
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB0_31:
Ltmp36:
	movq	%rax, %rbx
Ltmp37:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp38:
	jmp	LBB0_7
LBB0_32:
Ltmp39:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB0_14:
Ltmp12:
	movq	%rax, %rbx
Ltmp13:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp14:
	jmp	LBB0_7
LBB0_15:
Ltmp15:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB0_36:
Ltmp28:
	movq	%rax, %rbx
Ltmp29:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp30:
	jmp	LBB0_7
LBB0_37:
Ltmp31:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB0_6:
Ltmp4:
	movq	%rax, %rbx
Ltmp5:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp6:
	jmp	LBB0_7
LBB0_8:
Ltmp7:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB0_29:
Ltmp20:
	movq	%rax, %rbx
Ltmp21:
	leaq	-32(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp22:
LBB0_7:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
LBB0_30:
Ltmp23:
	movq	%rax, %rdi
	callq	___clang_call_terminate
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table0:
Lexception0:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\346\201\200"          ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.ascii	"\335\001"              ## Call site table length
Lset0 = Lfunc_begin0-Lfunc_begin0       ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp0-Lfunc_begin0              ##   Call between Lfunc_begin0 and Ltmp0
	.long	Lset1
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset2 = Ltmp0-Lfunc_begin0              ## >> Call Site 2 <<
	.long	Lset2
Lset3 = Ltmp3-Ltmp0                     ##   Call between Ltmp0 and Ltmp3
	.long	Lset3
Lset4 = Ltmp4-Lfunc_begin0              ##     jumps to Ltmp4
	.long	Lset4
	.byte	0                       ##   On action: cleanup
Lset5 = Ltmp3-Lfunc_begin0              ## >> Call Site 3 <<
	.long	Lset5
Lset6 = Ltmp8-Ltmp3                     ##   Call between Ltmp3 and Ltmp8
	.long	Lset6
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset7 = Ltmp8-Lfunc_begin0              ## >> Call Site 4 <<
	.long	Lset7
Lset8 = Ltmp11-Ltmp8                    ##   Call between Ltmp8 and Ltmp11
	.long	Lset8
Lset9 = Ltmp12-Lfunc_begin0             ##     jumps to Ltmp12
	.long	Lset9
	.byte	0                       ##   On action: cleanup
Lset10 = Ltmp11-Lfunc_begin0            ## >> Call Site 5 <<
	.long	Lset10
Lset11 = Ltmp16-Ltmp11                  ##   Call between Ltmp11 and Ltmp16
	.long	Lset11
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset12 = Ltmp16-Lfunc_begin0            ## >> Call Site 6 <<
	.long	Lset12
Lset13 = Ltmp19-Ltmp16                  ##   Call between Ltmp16 and Ltmp19
	.long	Lset13
Lset14 = Ltmp20-Lfunc_begin0            ##     jumps to Ltmp20
	.long	Lset14
	.byte	0                       ##   On action: cleanup
Lset15 = Ltmp19-Lfunc_begin0            ## >> Call Site 7 <<
	.long	Lset15
Lset16 = Ltmp24-Ltmp19                  ##   Call between Ltmp19 and Ltmp24
	.long	Lset16
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset17 = Ltmp24-Lfunc_begin0            ## >> Call Site 8 <<
	.long	Lset17
Lset18 = Ltmp27-Ltmp24                  ##   Call between Ltmp24 and Ltmp27
	.long	Lset18
Lset19 = Ltmp28-Lfunc_begin0            ##     jumps to Ltmp28
	.long	Lset19
	.byte	0                       ##   On action: cleanup
Lset20 = Ltmp27-Lfunc_begin0            ## >> Call Site 9 <<
	.long	Lset20
Lset21 = Ltmp32-Ltmp27                  ##   Call between Ltmp27 and Ltmp32
	.long	Lset21
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset22 = Ltmp32-Lfunc_begin0            ## >> Call Site 10 <<
	.long	Lset22
Lset23 = Ltmp35-Ltmp32                  ##   Call between Ltmp32 and Ltmp35
	.long	Lset23
Lset24 = Ltmp36-Lfunc_begin0            ##     jumps to Ltmp36
	.long	Lset24
	.byte	0                       ##   On action: cleanup
Lset25 = Ltmp35-Lfunc_begin0            ## >> Call Site 11 <<
	.long	Lset25
Lset26 = Ltmp37-Ltmp35                  ##   Call between Ltmp35 and Ltmp37
	.long	Lset26
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset27 = Ltmp37-Lfunc_begin0            ## >> Call Site 12 <<
	.long	Lset27
Lset28 = Ltmp38-Ltmp37                  ##   Call between Ltmp37 and Ltmp38
	.long	Lset28
Lset29 = Ltmp39-Lfunc_begin0            ##     jumps to Ltmp39
	.long	Lset29
	.byte	1                       ##   On action: 1
Lset30 = Ltmp13-Lfunc_begin0            ## >> Call Site 13 <<
	.long	Lset30
Lset31 = Ltmp14-Ltmp13                  ##   Call between Ltmp13 and Ltmp14
	.long	Lset31
Lset32 = Ltmp15-Lfunc_begin0            ##     jumps to Ltmp15
	.long	Lset32
	.byte	1                       ##   On action: 1
Lset33 = Ltmp29-Lfunc_begin0            ## >> Call Site 14 <<
	.long	Lset33
Lset34 = Ltmp30-Ltmp29                  ##   Call between Ltmp29 and Ltmp30
	.long	Lset34
Lset35 = Ltmp31-Lfunc_begin0            ##     jumps to Ltmp31
	.long	Lset35
	.byte	1                       ##   On action: 1
Lset36 = Ltmp5-Lfunc_begin0             ## >> Call Site 15 <<
	.long	Lset36
Lset37 = Ltmp6-Ltmp5                    ##   Call between Ltmp5 and Ltmp6
	.long	Lset37
Lset38 = Ltmp7-Lfunc_begin0             ##     jumps to Ltmp7
	.long	Lset38
	.byte	1                       ##   On action: 1
Lset39 = Ltmp21-Lfunc_begin0            ## >> Call Site 16 <<
	.long	Lset39
Lset40 = Ltmp22-Ltmp21                  ##   Call between Ltmp21 and Ltmp22
	.long	Lset40
Lset41 = Ltmp23-Lfunc_begin0            ##     jumps to Ltmp23
	.long	Lset41
	.byte	1                       ##   On action: 1
Lset42 = Ltmp22-Lfunc_begin0            ## >> Call Site 17 <<
	.long	Lset42
Lset43 = Lfunc_end0-Ltmp22              ##   Call between Ltmp22 and Lfunc_end0
	.long	Lset43
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_def_can_be_hidden	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.p2align	4, 0x90
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ## @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi6:
	.cfi_def_cfa_offset 16
Lcfi7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi8:
	.cfi_def_cfa_register %rbp
	pushq	%r14
	pushq	%rbx
Lcfi9:
	.cfi_offset %rbx, -32
Lcfi10:
	.cfi_offset %r14, -24
	movq	%rsi, %rbx
	movq	%rdi, %r14
	movq	%rbx, %rdi
	callq	__ZNSt3__111char_traitsIcE6lengthEPKc
	movq	%r14, %rdi
	movq	%rbx, %rsi
	movq	%rax, %rdx
	popq	%rbx
	popq	%r14
	popq	%rbp
	jmp	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ## TAILCALL
	.cfi_endproc

	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_def_can_be_hidden	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	4, 0x90
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ## @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## BB#0:
	pushq	%rbp
Lcfi11:
	.cfi_def_cfa_offset 16
Lcfi12:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi13:
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$40, %rsp
Lcfi14:
	.cfi_offset %rbx, -56
Lcfi15:
	.cfi_offset %r12, -48
Lcfi16:
	.cfi_offset %r13, -40
Lcfi17:
	.cfi_offset %r14, -32
Lcfi18:
	.cfi_offset %r15, -24
	movq	%rdx, %r14
	movq	%rsi, %rbx
	movq	%rdi, %r13
Ltmp40:
	leaq	-80(%rbp), %rdi
	movq	%r13, %rsi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp41:
## BB#1:
	cmpb	$0, -80(%rbp)
	je	LBB2_11
## BB#2:
	movq	(%r13), %rax
	movq	-24(%rax), %r12
	leaq	(%r13,%r12), %r15
	movq	40(%r13,%r12), %rax
	movq	%rax, -64(%rbp)         ## 8-byte Spill
	movl	8(%r13,%r12), %eax
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	callq	__ZNSt3__111char_traitsIcE3eofEv
	movl	144(%r13,%r12), %esi
	movq	%r15, %r12
	movq	%rbx, %r15
	movl	%eax, %edi
	callq	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	testb	%al, %al
	je	LBB2_8
## BB#3:
Ltmp42:
	leaq	-48(%rbp), %rdi
	movq	%r12, %rsi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp43:
## BB#4:
Ltmp44:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	leaq	-48(%rbp), %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp45:
## BB#5:
	movq	(%rax), %rcx
Ltmp46:
	movl	$32, %esi
	movq	%rax, %rdi
	callq	*56(%rcx)
	movl	%eax, %ebx
Ltmp47:
## BB#6:
Ltmp52:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp53:
## BB#7:
	movsbl	%bl, %eax
	movl	%eax, 144(%r12)
LBB2_8:
	addq	%r15, %r14
	movl	-52(%rbp), %eax         ## 4-byte Reload
	andl	$176, %eax
	cmpl	$32, %eax
	movq	%r15, %rdx
	cmoveq	%r14, %rdx
	movsbl	144(%r12), %r9d
Ltmp54:
	movq	-64(%rbp), %rdi         ## 8-byte Reload
	movq	%r15, %rsi
	movq	%r14, %rcx
	movq	%r12, %r8
	callq	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp55:
## BB#9:
	testq	%rax, %rax
	jne	LBB2_11
## BB#10:
	movq	(%r13), %rax
	movq	-24(%rax), %rax
	leaq	(%r13,%rax), %rdi
	movl	32(%r13,%rax), %esi
	orl	$5, %esi
Ltmp56:
	callq	__ZNSt3__18ios_base5clearEj
Ltmp57:
LBB2_11:
Ltmp61:
	leaq	-80(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp62:
LBB2_19:
	movq	%r13, %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB2_12:
Ltmp48:
	movq	%rax, %r14
Ltmp49:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp50:
	jmp	LBB2_15
LBB2_13:
Ltmp51:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB2_14:
Ltmp58:
	movq	%rax, %r14
LBB2_15:
Ltmp59:
	leaq	-80(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp60:
	jmp	LBB2_17
LBB2_16:
Ltmp63:
	movq	%rax, %r14
LBB2_17:
	movq	%r14, %rdi
	callq	___cxa_begin_catch
	movq	(%r13), %rax
	movq	-24(%rax), %rdi
	addq	%r13, %rdi
Ltmp64:
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp65:
## BB#18:
	callq	___cxa_end_catch
	jmp	LBB2_19
LBB2_20:
Ltmp66:
	movq	%rax, %rbx
Ltmp67:
	callq	___cxa_end_catch
Ltmp68:
## BB#21:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
LBB2_22:
Ltmp69:
	movq	%rax, %rdi
	callq	___clang_call_terminate
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table2:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\245\201\200\200"      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.ascii	"\234\001"              ## Call site table length
Lset44 = Ltmp40-Lfunc_begin1            ## >> Call Site 1 <<
	.long	Lset44
Lset45 = Ltmp41-Ltmp40                  ##   Call between Ltmp40 and Ltmp41
	.long	Lset45
Lset46 = Ltmp63-Lfunc_begin1            ##     jumps to Ltmp63
	.long	Lset46
	.byte	1                       ##   On action: 1
Lset47 = Ltmp42-Lfunc_begin1            ## >> Call Site 2 <<
	.long	Lset47
Lset48 = Ltmp43-Ltmp42                  ##   Call between Ltmp42 and Ltmp43
	.long	Lset48
Lset49 = Ltmp58-Lfunc_begin1            ##     jumps to Ltmp58
	.long	Lset49
	.byte	1                       ##   On action: 1
Lset50 = Ltmp44-Lfunc_begin1            ## >> Call Site 3 <<
	.long	Lset50
Lset51 = Ltmp47-Ltmp44                  ##   Call between Ltmp44 and Ltmp47
	.long	Lset51
Lset52 = Ltmp48-Lfunc_begin1            ##     jumps to Ltmp48
	.long	Lset52
	.byte	1                       ##   On action: 1
Lset53 = Ltmp52-Lfunc_begin1            ## >> Call Site 4 <<
	.long	Lset53
Lset54 = Ltmp57-Ltmp52                  ##   Call between Ltmp52 and Ltmp57
	.long	Lset54
Lset55 = Ltmp58-Lfunc_begin1            ##     jumps to Ltmp58
	.long	Lset55
	.byte	1                       ##   On action: 1
Lset56 = Ltmp61-Lfunc_begin1            ## >> Call Site 5 <<
	.long	Lset56
Lset57 = Ltmp62-Ltmp61                  ##   Call between Ltmp61 and Ltmp62
	.long	Lset57
Lset58 = Ltmp63-Lfunc_begin1            ##     jumps to Ltmp63
	.long	Lset58
	.byte	1                       ##   On action: 1
Lset59 = Ltmp49-Lfunc_begin1            ## >> Call Site 6 <<
	.long	Lset59
Lset60 = Ltmp50-Ltmp49                  ##   Call between Ltmp49 and Ltmp50
	.long	Lset60
Lset61 = Ltmp51-Lfunc_begin1            ##     jumps to Ltmp51
	.long	Lset61
	.byte	1                       ##   On action: 1
Lset62 = Ltmp59-Lfunc_begin1            ## >> Call Site 7 <<
	.long	Lset62
Lset63 = Ltmp60-Ltmp59                  ##   Call between Ltmp59 and Ltmp60
	.long	Lset63
Lset64 = Ltmp69-Lfunc_begin1            ##     jumps to Ltmp69
	.long	Lset64
	.byte	1                       ##   On action: 1
Lset65 = Ltmp60-Lfunc_begin1            ## >> Call Site 8 <<
	.long	Lset65
Lset66 = Ltmp64-Ltmp60                  ##   Call between Ltmp60 and Ltmp64
	.long	Lset66
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset67 = Ltmp64-Lfunc_begin1            ## >> Call Site 9 <<
	.long	Lset67
Lset68 = Ltmp65-Ltmp64                  ##   Call between Ltmp64 and Ltmp65
	.long	Lset68
Lset69 = Ltmp66-Lfunc_begin1            ##     jumps to Ltmp66
	.long	Lset69
	.byte	0                       ##   On action: cleanup
Lset70 = Ltmp65-Lfunc_begin1            ## >> Call Site 10 <<
	.long	Lset70
Lset71 = Ltmp67-Ltmp65                  ##   Call between Ltmp65 and Ltmp67
	.long	Lset71
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset72 = Ltmp67-Lfunc_begin1            ## >> Call Site 11 <<
	.long	Lset72
Lset73 = Ltmp68-Ltmp67                  ##   Call between Ltmp67 and Ltmp68
	.long	Lset73
Lset74 = Ltmp69-Lfunc_begin1            ##     jumps to Ltmp69
	.long	Lset74
	.byte	1                       ##   On action: 1
Lset75 = Ltmp68-Lfunc_begin1            ## >> Call Site 12 <<
	.long	Lset75
Lset76 = Lfunc_end1-Ltmp68              ##   Call between Ltmp68 and Lfunc_end1
	.long	Lset76
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__111char_traitsIcE6lengthEPKc
	.weak_def_can_be_hidden	__ZNSt3__111char_traitsIcE6lengthEPKc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE6lengthEPKc:  ## @_ZNSt3__111char_traitsIcE6lengthEPKc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi19:
	.cfi_def_cfa_offset 16
Lcfi20:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi21:
	.cfi_def_cfa_register %rbp
	popq	%rbp
	jmp	_strlen                 ## TAILCALL
	.cfi_endproc

	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_def_can_be_hidden	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	4, 0x90
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ## @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
## BB#0:
	pushq	%rbp
Lcfi22:
	.cfi_def_cfa_offset 16
Lcfi23:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi24:
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$40, %rsp
Lcfi25:
	.cfi_offset %rbx, -56
Lcfi26:
	.cfi_offset %r12, -48
Lcfi27:
	.cfi_offset %r13, -40
Lcfi28:
	.cfi_offset %r14, -32
Lcfi29:
	.cfi_offset %r15, -24
	movq	%rcx, %r15
	movq	%rdx, %r12
	movq	%rdi, %rbx
	testq	%rbx, %rbx
	je	LBB4_12
## BB#1:
	movq	%r15, %rax
	subq	%rsi, %rax
	movq	%r8, -80(%rbp)          ## 8-byte Spill
	movq	24(%r8), %rcx
	xorl	%r13d, %r13d
	subq	%rax, %rcx
	cmovgq	%rcx, %r13
	movq	%r12, %r14
	subq	%rsi, %r14
	testq	%r14, %r14
	jle	LBB4_3
## BB#2:
	movq	(%rbx), %rax
	movq	%rbx, %rdi
	movq	%r14, %rdx
	movq	%r15, -72(%rbp)         ## 8-byte Spill
	movq	%r12, %r15
	movl	%r9d, %r12d
	callq	*96(%rax)
	movl	%r12d, %r9d
	movq	%r15, %r12
	movq	-72(%rbp), %r15         ## 8-byte Reload
	cmpq	%r14, %rax
	jne	LBB4_12
LBB4_3:
	testq	%r13, %r13
	jle	LBB4_6
## BB#4:
	xorps	%xmm0, %xmm0
	movaps	%xmm0, -64(%rbp)
	movq	$0, -48(%rbp)
	movsbl	%r9b, %edx
	leaq	-64(%rbp), %rdi
	movq	%r13, %rsi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	testb	$1, -64(%rbp)
	leaq	-63(%rbp), %rsi
	cmovneq	-48(%rbp), %rsi
	movq	(%rbx), %rax
Ltmp70:
	movq	%rbx, %rdi
	movq	%r13, %rdx
	callq	*96(%rax)
	movq	%rax, %r14
Ltmp71:
## BB#5:
	leaq	-64(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	cmpq	%r13, %r14
	jne	LBB4_12
LBB4_6:
	subq	%r12, %r15
	testq	%r15, %r15
	jle	LBB4_8
## BB#7:
	movq	(%rbx), %rax
	movq	%rbx, %rdi
	movq	%r12, %rsi
	movq	%r15, %rdx
	callq	*96(%rax)
	cmpq	%r15, %rax
	jne	LBB4_12
LBB4_8:
	movq	-80(%rbp), %rax         ## 8-byte Reload
	movq	$0, 24(%rax)
	jmp	LBB4_13
LBB4_12:
	xorl	%ebx, %ebx
LBB4_13:
	movq	%rbx, %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB4_14:
Ltmp72:
	movq	%rax, %rbx
Ltmp73:
	leaq	-64(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
Ltmp74:
## BB#15:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
LBB4_16:
Ltmp75:
	movq	%rax, %rdi
	callq	___clang_call_terminate
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table4:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.byte	73                      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	65                      ## Call site table length
Lset77 = Lfunc_begin2-Lfunc_begin2      ## >> Call Site 1 <<
	.long	Lset77
Lset78 = Ltmp70-Lfunc_begin2            ##   Call between Lfunc_begin2 and Ltmp70
	.long	Lset78
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset79 = Ltmp70-Lfunc_begin2            ## >> Call Site 2 <<
	.long	Lset79
Lset80 = Ltmp71-Ltmp70                  ##   Call between Ltmp70 and Ltmp71
	.long	Lset80
Lset81 = Ltmp72-Lfunc_begin2            ##     jumps to Ltmp72
	.long	Lset81
	.byte	0                       ##   On action: cleanup
Lset82 = Ltmp71-Lfunc_begin2            ## >> Call Site 3 <<
	.long	Lset82
Lset83 = Ltmp73-Ltmp71                  ##   Call between Ltmp71 and Ltmp73
	.long	Lset83
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset84 = Ltmp73-Lfunc_begin2            ## >> Call Site 4 <<
	.long	Lset84
Lset85 = Ltmp74-Ltmp73                  ##   Call between Ltmp73 and Ltmp74
	.long	Lset85
Lset86 = Ltmp75-Lfunc_begin2            ##     jumps to Ltmp75
	.long	Lset86
	.byte	1                       ##   On action: 1
Lset87 = Ltmp74-Lfunc_begin2            ## >> Call Site 5 <<
	.long	Lset87
Lset88 = Lfunc_end2-Ltmp74              ##   Call between Ltmp74 and Lfunc_end2
	.long	Lset88
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2

	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	___clang_call_terminate
	.globl	___clang_call_terminate
	.weak_def_can_be_hidden	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## BB#0:
	pushq	%rax
	callq	___cxa_begin_catch
	callq	__ZSt9terminatev

	.globl	__ZNSt3__111char_traitsIcE6assignEPcmc
	.weak_def_can_be_hidden	__ZNSt3__111char_traitsIcE6assignEPcmc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE6assignEPcmc: ## @_ZNSt3__111char_traitsIcE6assignEPcmc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi30:
	.cfi_def_cfa_offset 16
Lcfi31:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi32:
	.cfi_def_cfa_register %rbp
	pushq	%r14
	pushq	%rbx
Lcfi33:
	.cfi_offset %rbx, -32
Lcfi34:
	.cfi_offset %r14, -24
	movq	%rsi, %rbx
	movq	%rdi, %r14
	testq	%rbx, %rbx
	je	LBB6_2
## BB#1:
	movsbl	%dl, %edi
	callq	__ZNSt3__111char_traitsIcE11to_int_typeEc
	movq	%r14, %rdi
	movl	%eax, %esi
	movq	%rbx, %rdx
	callq	_memset
LBB6_2:
	movq	%r14, %rax
	popq	%rbx
	popq	%r14
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__111char_traitsIcE6assignERcRKc
	.weak_def_can_be_hidden	__ZNSt3__111char_traitsIcE6assignERcRKc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE6assignERcRKc: ## @_ZNSt3__111char_traitsIcE6assignERcRKc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi35:
	.cfi_def_cfa_offset 16
Lcfi36:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi37:
	.cfi_def_cfa_register %rbp
	movb	(%rsi), %al
	movb	%al, (%rdi)
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__111char_traitsIcE11to_int_typeEc
	.weak_def_can_be_hidden	__ZNSt3__111char_traitsIcE11to_int_typeEc
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE11to_int_typeEc: ## @_ZNSt3__111char_traitsIcE11to_int_typeEc
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi38:
	.cfi_def_cfa_offset 16
Lcfi39:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi40:
	.cfi_def_cfa_register %rbp
	movzbl	%dil, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.weak_def_can_be_hidden	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE11eq_int_typeEii: ## @_ZNSt3__111char_traitsIcE11eq_int_typeEii
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi41:
	.cfi_def_cfa_offset 16
Lcfi42:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi43:
	.cfi_def_cfa_register %rbp
	cmpl	%esi, %edi
	sete	%al
	popq	%rbp
	retq
	.cfi_endproc

	.globl	__ZNSt3__111char_traitsIcE3eofEv
	.weak_def_can_be_hidden	__ZNSt3__111char_traitsIcE3eofEv
	.p2align	4, 0x90
__ZNSt3__111char_traitsIcE3eofEv:       ## @_ZNSt3__111char_traitsIcE3eofEv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi44:
	.cfi_def_cfa_offset 16
Lcfi45:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi46:
	.cfi_def_cfa_register %rbp
	movl	$-1, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_num                    ## @num
.zerofill __DATA,__common,_num,8,3
	.globl	_NG                     ## @NG
.zerofill __DATA,__common,_NG,8,3
	.section	__DATA,__data
	.globl	_LG                     ## @LG
	.p2align	3
_LG:
	.quad	4607182418800017408     ## double 1

	.globl	_approx                 ## @approx
.zerofill __DATA,__common,_approx,8,3
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"This program determines the square root of a number. \n"

L_.str.1:                               ## @.str.1
	.asciz	"Please enter a number: "

L_.str.2:                               ## @.str.2
	.asciz	"Error"

L_.str.3:                               ## @.str.3
	.asciz	"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size"


.subsections_via_symbols
