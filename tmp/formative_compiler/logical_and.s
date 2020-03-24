.globl f
f:
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
sw $3, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $3, 12($29)
beq $3, $0, _false_0
lw $8, 8($29)
beq $8, $0, _false_0
addi $2, $2, 1
j _theEnd_1
_false_0:
addi $2, $0, 0
_theEnd_1:
lw $3, 0($29)
addi $29, $29, 4
lw $8, 0($29)
addi $29, $29, 4
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop

