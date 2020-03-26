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
sw $3, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $3, 12($29)
lw $8, 8($29)
beq $3, $0, _false_and_1
nop
beq $8, $0, _false_and_1
nop
li $2, 1
beq $0, $0, _true_and_0
nop
_false_and_1:
li $2, 0
_true_and_0:
lw $8, 0($29)
addi $29, $29, 4
lw $3, 0($29)
addi $29, $29, 4
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


