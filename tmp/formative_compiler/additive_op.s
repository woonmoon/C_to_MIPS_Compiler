.globl add
add:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 1
addi $29, $29, -4
sw $2, 0($29)
li $2, 3

addu $2, $2, $2
lw $2, 0($29)
addi $29, $29, 4
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
.globl sub
sub:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
li $2, 9
addi $29, $29, -4
sw $3, 0($29)
li $3, 5

subu $2, $2, $3
lw $3, 0($29)
addi $29, $29, 4
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop

