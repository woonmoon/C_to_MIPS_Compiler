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
_cont_0: 
li $2, 0
beq $2, $0, _end_1
nop
j _cont_0
nop
_end_1:

li $2, 19937
lw $31, 4($29)
lw $30, 0($29)
addiu $29, $29, 8
jr $31
nop


