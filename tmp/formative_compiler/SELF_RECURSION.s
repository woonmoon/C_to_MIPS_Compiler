.globl SELF_RECURSION
SELF_RECURSION:
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
beq $3, $0, _falsy_0
li $2, 12345
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop
_falsy_0:
li $4, 0
jal SELF_RECURSION
nop
move $2, $2
lw $31, 8($29)
lw $30, 4($29)
addiu $29, $29, 12
jr $31
nop


