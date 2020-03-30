.globl fib
fib:
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

slt $3, $8, $3
xori $3, $3, 1
lw $8, 0($29)
addi $29, $29, 4
beq $3, $0, _falsy_0
li $2, 0
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
_falsy_0:
addi $29, $29, -4
sw $10, 0($29)
lw $9, 4($29)
li $10, 1

sub $9, $9, $10
sltiu $9, $9, 1
lw $10, 0($29)
addi $29, $29, 4
beq $9, $0, _falsy_1
li $2, 1
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
_falsy_1:
addi $29, $29, -4
sw $11, 0($29)
addi $29, $29, -4
sw $12, 0($29)
lw $4, 8($29)
addi $29, $29, -4
sw $13, 0($29)
li $13, 1

subu $4, $4, $13
lw $13, 0($29)
addi $29, $29, 4
jal fib
nop
move $12, $2
lw $4, 8($29)
addi $29, $29, -4
sw $14, 0($29)
li $14, 2

subu $4, $4, $14
lw $14, 0($29)
addi $29, $29, 4
jal fib
nop
move $11, $2

addu $2, $12, $11
lw $12, 0($29)
addi $29, $29, 4
lw $11, 0($29)
addi $29, $29, 4
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop


