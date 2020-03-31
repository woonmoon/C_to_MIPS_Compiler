.globl g
g:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
move $2, $4
sw $2, 0($29)
lw $2, 0($29)
addi $3, $2, -1
beq $3, $0, _case_1
addi $3, $2, -2
beq $3, $0, _case_2
_case_1: 
li $2, 10
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
_case_2: 
li $2, 11
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
_end_0: 



