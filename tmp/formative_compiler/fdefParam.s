.globl fdefParam
fdefParam:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
move $2, $4
sw $2, 0($29)
lw $2, 0($29)
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop


