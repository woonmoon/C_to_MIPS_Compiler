postfix exp
unary exp
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
sw $3, 0($29)
lw $3, 4($29)
li $3, 1
sw $3, 4($29)
lw $3, 0($29)
addi $29, $29, 4
_cont_0: 
lw $2, 0($29)
beq $2, $0, _end_1
nop
addi $29, $29, -4
sw $8, 0($29)
lw $8, 4($29)
li $8, 0
sw $8, 4($29)
lw $8, 0($29)
addi $29, $29, 4
j _cont_0
nop
_end_1:

li $2, 19937
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


