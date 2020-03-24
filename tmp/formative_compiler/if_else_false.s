.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 0
beq $2, $0, _falsy_1
j _end_0
_falsy_1:
_end_0:

