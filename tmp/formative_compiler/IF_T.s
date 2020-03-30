.globl IF_T
IF_T:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 1
beq $2, $0, _falsy_0
li $2, 69
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
_falsy_0:
li $2, 420
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


