addi $29, $29, -4
sw $3, 0($29)

.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $4, 1
li $5, 2
li $6, 3
li $7, 4
li $8, 5
jal g
nop
move $2, $2
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


