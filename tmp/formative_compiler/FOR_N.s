.globl FOR_N
FOR_N:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $3, 0($29)
lw $3, 4($29)
li $3, 0
sw $3, 4($29)
lw $3, 0($29)
addi $29, $29, 4
_continue_0: 
addi $29, $29, -4
sw $3, 0($29)
lw $2, 4($29)
li $3, 2

slt $2, $2, $3
lw $3, 0($29)
addi $29, $29, 4
beq $2, $0, _break_1
nop
addi $29, $29, -4
sw $3, 0($29)
lw $3, 4($29)
lw $2, 4($29)
addi $3, $3, 1
sw $3, 4($29)
lw $3, 0($29)
addi $29, $29, 4
j _continue_0
nop
_break_1:

lw $2, 0($29)
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


