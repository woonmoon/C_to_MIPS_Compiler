.globl multiply
multiply:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
move $2, $4
sw $2, 0($29)
addi $29, $29, -4
move $2, $5
sw $2, 0($29)
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
li $8, 0
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $9, 0($29)
lw $8, 16($29)
li $9, 0

slt $8, $8, $9
lw $9, 0($29)
addi $29, $29, 4
beq $8, $0, _falsy_0
lw $4, 12($29)
not $11, $11
addiu $11, $11, 1
lw $5, 8($29)
jal multiply
nop
move $10, $2
not $10, $10
addiu $10, $10, 1
lw $31, 20($29)
lw $30, 16($29)
addiu $29, $29, 24
jr $31
nop
_falsy_0:
_continue_1: 
addi $29, $29, -4
sw $12, 0($29)
lw $2, 16($29)
li $12, 0

slt $2, $12, $2
lw $12, 0($29)
addi $29, $29, 4
beq $2, $0, _break_2
nop
addi $29, $29, -4
sw $13, 0($29)
addi $29, $29, -4
sw $14, 0($29)
lw $13, 8($29)
lw $14, 16($29)
add $13, $13, $14
sw $13, 8($29)
lw $14, 0($29)
addi $29, $29, 4
lw $13, 0($29)
addi $29, $29, 4
addi $29, $29, -4
sw $15, 0($29)
addi $29, $29, -4
sw $16, 0($29)
lw $15, 20($29)
lw $0, 20($29)
addi $16, $15, -1
sw $16, 20($29)
lw $16, 0($29)
addi $29, $29, 4
lw $15, 0($29)
addi $29, $29, 4
j _continue_1
nop
_break_2:

lw $2, 0($29)
lw $31, 20($29)
lw $30, 16($29)
addiu $29, $29, 24
jr $31
nop


