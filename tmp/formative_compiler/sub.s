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
sw $8, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $8, 0($29)
lw $8, 4($29)
lw $8, 16($29)
addi $29, $29, -4
sw $9, 0($29)
lw $9, 16($29)

subu $8, $8, $9
lw $9, 0($29)
addi $29, $29, 4
sw $8, 4($29)
lw $8, 0($29)
addi $29, $29, 4
lw $2, 0($29)
lw $31, 20($29)
lw $30, 16($29)
addiu $29, $29, 24
jr $31
nop

