.globl f
f:
addi $29, $29, -4
sw $31, 0($29)
addi $29, $29, -4
sw $30, 0($29)
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -36
addi $29, $29, -4
sw $9, 0($29)
addi $29, $29, -4
sw $9, 0($29)
lw $9, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $9, 0($29)
lw $9, 52($29)
li $9, 8
sw $9, 52($29)
lw $9, 0($29)
addi $29, $29, 4
_cont_0: 
addi $29, $29, -4
sw $9, 0($29)
lw $2, 52($29)
li $9, 16

slt $2, $2, $9
lw $9, 0($29)
addi $29, $29, 4
beq $2, $0, _end_1
nop
addi $29, $29, -4
sw $10, 0($29)
addi $29, $29, -4
sw $12, 0($29)
li $12, 4
lw $11, 56($29)
addi $29, $29, -4
sw $13, 0($29)
li $13, 8

subu $11, $11, $13
lw $13, 0($29)
addi $29, $29, 4
mult $12, $11
mflo $11
addi $11, $11, 24
li $12, 72
sub $11, $12, $11
add $11, $11, $29
lw $10, 0($11)
lw $12, 0($29)
addi $29, $29, 4
lw $10, 52($29)
sw $10, 0($11)
lw $10, 0($29)
addi $29, $29, 4
addi $29, $29, -4
sw $10, 0($29)
addi $29, $29, -4
sw $11, 0($29)
lw $10, 56($29)
lw $2, 56($29)
addi $11, $10, 1
sw $11, 56($29)
lw $11, 0($29)
addi $29, $29, 4
lw $10, 0($29)
addi $29, $29, 4
j _cont_0
nop
_end_1:

addi $29, $29, -4
sw $12, 0($29)
lw $12, 4($29)
li $12, 0
sw $12, 4($29)
lw $12, 0($29)
addi $29, $29, 4
addi $29, $29, -4
sw $12, 0($29)
lw $12, 52($29)
li $12, 0
sw $12, 52($29)
lw $12, 0($29)
addi $29, $29, 4
_cont_2: 
addi $29, $29, -4
sw $12, 0($29)
lw $2, 52($29)
li $12, 8

slt $2, $2, $12
lw $12, 0($29)
addi $29, $29, 4
beq $2, $0, _end_3
nop
addi $29, $29, -4
sw $14, 0($29)
lw $14, 4($29)
lw $14, 4($29)
addi $29, $29, -4
sw $15, 0($29)
addi $29, $29, -4
sw $25, 0($29)
li $25, 4
lw $16, 60($29)
addi $29, $29, -4
sw $26, 0($29)
li $26, 0

addu $16, $16, $26
lw $26, 0($29)
addi $29, $29, 4
mult $25, $16
mflo $16
addi $16, $16, 24
li $25, 76
sub $16, $25, $16
add $16, $16, $29
lw $15, 0($16)
lw $25, 0($29)
addi $29, $29, 4

addu $14, $14, $15
lw $15, 0($29)
addi $29, $29, 4
sw $14, 4($29)
lw $14, 0($29)
addi $29, $29, 4
addi $29, $29, -4
sw $14, 0($29)
addi $29, $29, -4
sw $25, 0($29)
lw $14, 56($29)
lw $2, 56($29)
addi $25, $14, 1
sw $25, 56($29)
lw $25, 0($29)
addi $29, $29, 4
lw $14, 0($29)
addi $29, $29, 4
j _cont_2
nop
_end_3:

lw $2, 0($29)
lw $31, 60($29)
lw $30, 56($29)
addiu $29, $29, 64
jr $31
nop


