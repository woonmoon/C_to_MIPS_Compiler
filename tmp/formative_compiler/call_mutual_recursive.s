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
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4

.globl r1
r1:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
move $2, $4
sw $2, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $3, 4($29)
li $8, 0

sub $3, $3, $8
sltiu $3, $3, 1
lw $8, 0($29)
addi $29, $29, 4
beq $3, $0, _falsy_1
li $2, 1
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
j _end_0
_falsy_1:
lw $4, 0($29)
addi $29, $29, -4
sw $10, 0($29)
li $10, 1

subu $4, $4, $10
lw $10, 0($29)
addi $29, $29, 4
jal r2
nop
addi $29, $29, -4
sw $9, 0($29)
lw $4, 4($29)
addi $29, $29, -4
sw $11, 0($29)
li $11, 1

subu $4, $4, $11
lw $11, 0($29)
addi $29, $29, 4
jal r2
nop

addu $2, $2, $9
lw $9, 0($29)
addi $29, $29, 4
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
_end_0:


