.globl for_break
for_break:
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
sw $3, 0($29)
lw $3, 4($29)
li $3, 0
sw $3, 4($29)
lw $3, 0($29)
addi $29, $29, 4
_continue_0: 
addi $29, $29, -4
sw $3, 0($29)
lw $2, 4($29)
li $3, 20

slt $2, $2, $3
lw $3, 0($29)
addi $29, $29, 4
beq $2, $0, _break_1
nop
addi $29, $29, -4
sw $8, 0($29)
lw $3, 4($29)
li $8, 10

sub $3, $3, $8
sltiu $3, $3, 1
lw $8, 0($29)
addi $29, $29, 4
beq $3, $0, _falsy_2
addi $29, $29, 0
j _break_1
nop
_falsy_2:
addi $29, $29, -4
sw $9, 0($29)
lw $9, 4($29)
lw $2, 4($29)
addi $9, $9, 1
sw $9, 4($29)
lw $9, 0($29)
addi $29, $29, 4
j _continue_0
nop
_break_1:

lw $2, 0($29)
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


