.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
li $3, 10
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
li $8, 20
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
sw $9, 0($29)
lw $9, 16($29)
lw $8, 8($29)

addu $2, $9, $8
lw $9, 0($29)
addi $29, $29, 4
lw $8, 0($29)
addi $29, $29, 4
lw $31, 20($29)
lw $30, 16($29)
addiu $29, $29, 24
jr $31
nop


