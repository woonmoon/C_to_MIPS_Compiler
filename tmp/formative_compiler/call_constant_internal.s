.globl g
g:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 20
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop

.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
jal g
nop
move $2, $2
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


