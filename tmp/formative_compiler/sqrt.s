.globl bsqrt
bsqrt:
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
move $2, $6
sw $2, 0($29)
_continue_0: 
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
sw $9, 0($29)
lw $2, 20($29)
li $8, 1

addu $2, $2, $8
lw $9, 0($29)
addi $29, $29, 4
lw $8, 0($29)
addi $29, $29, 4
lw $3, 8($29)

slt $2, $2, $3
lw $3, 0($29)
addi $29, $29, 4
beq $2, $0, _break_1
nop
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
addi $29, $29, -4
sw $10, 0($29)
addi $29, $29, -4
sw $11, 0($29)
addi $29, $29, -4
sw $12, 0($29)
addi $29, $29, -4
sw $13, 0($29)
lw $10, 32($29)
lw $12, 28($29)

addu $10, $10, $12
lw $13, 0($29)
addi $29, $29, 4
lw $12, 0($29)
addi $29, $29, 4
li $11, 1

sll $8, $10, $11
lw $11, 0($29)
addi $29, $29, 4
lw $10, 0($29)
addi $29, $29, 4
sw $8, 12($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, 8
addi $29, $29, -4
sw $12, 0($29)
addi $29, $29, -4
addi $29, $29, -4
sw $14, 0($29)
addi $29, $29, -4
sw $15, 0($29)
lw $14, 4($29)
lw $15, 4($29)

mult $14, $15
mflo $12
lw $15, 0($29)
addi $29, $29, 4
lw $14, 0($29)
addi $29, $29, 4
sw $12, -4($29)
lw $12, 0($29)
addi $29, $29, 4
addi $29, $29, -8
addi $29, $29, -4
sw $16, 0($29)
lw $12, 8($29)
lw $16, 12($29)

slt $12, $16, $12
xori $12, $12, 1
lw $16, 0($29)
addi $29, $29, 4
beq $12, $0, _falsy_3
addi $29, $29, -4
sw $25, 0($29)
lw $25, 20($29)
lw $25, 4($29)
sw $25, 20($29)
lw $25, 0($29)
addi $29, $29, 4
j _end_2
_falsy_3:
addi $29, $29, -4
sw $25, 0($29)
lw $25, 16($29)
lw $25, 4($29)
sw $25, 16($29)
lw $25, 0($29)
addi $29, $29, 4
_end_2:
j _continue_0
nop
_break_1:

addi $29, $29, -4
sw $26, 0($29)
addi $29, $29, -4
