primary exp
issa constant made
postfix exp
unary exp
cast exp
mult exp
additive exp
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
li $2, 10
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


