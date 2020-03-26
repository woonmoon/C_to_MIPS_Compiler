.globl g
g:
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

.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $4, 10
jal g
nop
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


