.data
vv: .word 0
.text

.globl g
g:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
la $2, vv
lw $2, 0($2)
addi $29, $29, -4
sw $3, 0($29)
li $3, 1

addu $2, $2, $3
lw $3, 0($29)
addi $29, $29, 4
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


