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
postfix exp
unary exp
cast exp
mult exp
additive exp
shift expression
relational expression
equality expression
and exp
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
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $8, 0($29)
lw $3, 12($29)
lw $8, 8($29)

xor $2, $3, $8
lw $8, 0($29)
addi $29, $29, 4
lw $3, 0($29)
addi $29, $29, 4
lw $31, 12($29)
lw $30, 8($29)
addiu $29, $29, 16
jr $31
nop


