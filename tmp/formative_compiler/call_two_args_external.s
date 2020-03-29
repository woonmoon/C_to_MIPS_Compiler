addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
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
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4

.globl f
f:
li $4, 10
li $5, 20
jal g
nop
move $2, $2
lw $31, -4($29)
lw $30, -8($29)
addiu $29, $29, 0
jr $31
nop


