.globl while_continue_return
while_continue_return:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
li $3, 0
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
_continue_0: 
li $2, 1
beq $2, $0, _break_1
nop
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $9, 0($29)
lw $8, 20($29)
li $9, 10

sub $8, $8, $9
sltiu $8, $8, 1
lw $9, 0($29)
addi $29, $29, 4
beq $8, $0, _falsy_2
addi $29, $29, -4
sw $11, 0($29)
addi $29, $29, -4
sw $11, 0($29)
lw $11, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $11, 0($29)
addi $29, $29, -4
sw $11, 0($29)
lw $11, 0($29)
addi $29, $29, 4
addi $29, $29, -4
li $2, 10
lw $31, 44($29)
lw $30, 40($29)
addiu $29, $29, 48
jr $31
nop
li $2, 11
lw $31, 44($29)
lw $30, 40($29)
addiu $29, $29, 48
jr $31
nop
li $2, 12
lw $31, 44($29)
lw $30, 40($29)
addiu $29, $29, 48
jr $31
nop
_falsy_2:
addi $29, $29, -4
sw $11, 0($29)
addi $29, $29, -4
sw $12, 0($29)
lw $11, 40($29)
lw $0, 40($29)
addi $12, $11, 1
sw $12, 40($29)
lw $12, 0($29)
addi $29, $29, 4
lw $11, 0($29)
addi $29, $29, 4
addi $29, $29, 32
j _continue_0
nop
li $2, 13
lw $31, 44($29)
lw $30, 40($29)
addiu $29, $29, 48
jr $31
nop
li $2, 14
lw $31, 44($29)
lw $30, 40($29)
addiu $29, $29, 48
jr $31
nop
j _continue_0
nop
_break_1:

li $2, 20
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


