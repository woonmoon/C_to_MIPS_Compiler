postfix exp
unary exp
cast exp
mult exp
additive exp
postfix exp
unary exp
cast exp
mult exp
shift expression
relational expression
equality expression
and exp
exclusive or
inclusive or
logical and 
logical or
conditional expression
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
lw $2, 4($29)
addi $29, $29, -4
sw $3, 0($29)
lw $3, 4($29)

addu $2, $2, $3
lw $3, 0($29)
addi $29, $29, 4
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


