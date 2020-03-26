.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 1
beq $2, $0, _falsy_1
li $2, 11
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
j _end_0
_falsy_1:
li $2, 10
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
_end_0:


