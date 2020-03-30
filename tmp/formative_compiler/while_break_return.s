.globl while_break_return
while_break_return:
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
addi $29, $29, -4
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
_continue_0: 
addi $29, $29, -4
sw $3, 0($29)
lw $2, 20($29)
li $3, 0

slt $2, $3, $2
lw $3, 0($29)
addi $29, $29, 4
beq $2, $0, _break_1
nop
addi $29, $29, 0
j _break_1
nop
li $2, 10
lw $31, 28($29)
lw $30, 24($29)
addiu $29, $29, 32
jr $31
nop
j _continue_0
nop
_break_1:

li $2, 1
lw $31, 28($29)
lw $30, 24($29)
addiu $29, $29, 32
jr $31
nop


