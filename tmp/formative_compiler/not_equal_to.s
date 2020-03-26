.globl func
func:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $8, 0($29)
li $3, 1
li $8, 2

bne $3, $8, _neq_true_2
nop

li $2, 0
beq $0, $0, _neq_false_3
nop

_neq_true_2:
li $2, 1
_neq_false_3:
lw $8, 0($29)
addi $29, $29, 4
lw $3, 0($29)
addi $29, $29, 4
beq $2, $0, _falsy_1
li $2, 10
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
j _end_0
_falsy_1:
li $2, 0
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop
_end_0:


