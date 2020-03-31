.globl f
f:
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
lw $4, 0($29)
addi $29, $29, -4
sw $4, 0($29)
jal sizeof
nop
move $2, $2
lw $31, 16($29)
lw $30, 12($29)
addiu $29, $29, 20
jr $31
nop


