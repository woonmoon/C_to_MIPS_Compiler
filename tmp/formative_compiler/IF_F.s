.globl IF_F
IF_F:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 0
beq $2, $0, _falsy_0
li $2, 666
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
_falsy_0:
li $2, 2019
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


