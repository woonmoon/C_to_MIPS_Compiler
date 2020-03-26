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
sw $3, 0($29)
addi $29, $29, -4
li $3, 10
sw $3, 0($29)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
addi $29, $29, -4
sw $8, 0($29)
addi $29, $29, -4
li $8, 20
sw $8, 0($29)
lw $8, 0($29)
addi $29, $29, 4
addi $29, $29, -4
lw $2, 8($29)
addi $29, $29, -4
sw $8, 0($29)
lw $8, 4($29)

addu $2, $2, $8
lw $8, 0($29)
addi $29, $29, 4
lw $31, 20($29)
lw $30, 16($29)
addiu $29, $29, 24
jr $31
nop


