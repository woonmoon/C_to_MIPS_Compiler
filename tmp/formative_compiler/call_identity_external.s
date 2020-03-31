addi $29, $29, -4
sw $3, 0($29)

.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $4, 10
addi $29, $29, -4
sw $4, 0($29)
jal g
nop
move $2, $2
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop


