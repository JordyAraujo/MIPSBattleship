.data

	hello:		.asciiz	"Hello, world!"
	map:		.byte 	'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'
	ship0:		.byte	'1', '1', '1', '1', '1'
	ship1:		.byte	'1', '1', '1', '1'
	ship2:		.byte	'1', '1', '1'
	ship3:		.byte	'1', '1'
	ship4:		.byte	'1', '1'
	orientation:	.word	2
	maxRow:		.word	0
	maxCol:		.word	0
	x:		.word	1000
	y:		.word	1000
	position:	.word	1000
	isEmpty: 	.word	1
	
	# $s0 = i
	# $s1 = maxCol
	# $s2 = map
	# $s3 = 5
	# $s4 = x
	# $s5 = y
	# $s6 = position
	
	
.text

	li $s3, 5	# número total de elementos no vetor 
	
	move $s0, $zero	# i = 0 ($s0 é i)  
     	LOOP:
      		slt $t0, $s0, $s3	# t0 = 0 se $s0 >= $s3 ( i >= n), t0 = 1 caso contrário
      		beq $t0, $zero, EXIT	# se $s0 >= $s3 ( i >= n) vá para EXIT 
      	
      		li $a1, 2	# 0 for horizontal, 1 for vertical
    		li $v0, 42	#generates the random number.
    		syscall
    		move $s4, $a0	#salva $s4
    		
    		#move $a1, $s4
    		#li $v0, 1	#1 print integer
    		#syscall
    		
    		beq $s4, 0, HORIZONTAL
    		HORIZONTAL:
    			beq $s0, 0, HORIZON0
    			HORIZON0:
    				li $t1, 1
    				WHILE:
    					bne $t1, 1, EXIT_WHILE	# vá para EXIT se $t1 != 1
    					
    					li $a1, 6
    					li $v0, 42	#generates the random number.
    					syscall

    					move $s4, $a0 #Salva o x
    					move $s6, $s4 #Atualiza position
    					syscall
    					
    					move $a1, $s6
    					li $v0, 1
    					syscall
    					
    					li $a1, 9
    					li $v0, 42
    					syscall
    					
    					move $s5, $a0 #Salva o y
    					mul $s5, $s5, 10 #Multiplica por 10
    					
    					add $s6, $s5, $s4 #Atualiza position
    					
    					sll $t0, $s6, 2           # $t0 = 4*$s6
    					
    					la $s2, map
    					
    					add $t1, $t0, $s2
    					
    					lw $t2, 0($t1) #map[position1]
    					
    					move $a1, $t1
    					li $v0, 1
    					syscall
    					
    					li $t1, 0
					j WHILE
 				EXIT_WHILE:
    			EXIT_HORIZON0:
    		EXIT_HORIZONTAL:
      		
		addi $s0, $s0, 1	# $s0 = $s0 + 1 (ou i = i + 1) é o contador      
      		j LOOP	# volta para o LOOP  
     		EXIT:  
	ElseVertical:
	ElseHor0:
