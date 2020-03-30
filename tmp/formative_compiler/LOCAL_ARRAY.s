.globl LOCAL_ARRAY
LOCAL_ARRAY:
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
addi $29, $29, -8
addi $29, $29, -4
sw $3, 0($29)
addi $29, $29, -4
sw $9, 0($29)
li $9, 4
li $8, 0
mult $9, $8
mflo $8
addi $8, $8, 16
li $9, 28
sub $8, $9, $8
add $8, $8, $29
lw $3, 0($8)
lw $9, 0($29)
addi $29, $29, 4
li $3, 80085
sw $3, 0($8)
lw $3, 0($29)
addi $29, $29, 4
addi $29, $29, -4
sw $8, 0($29)
li $8, 4
li $3, 0
mult $8, $3
mflo $3
addi $3, $3, 16
li $8, 24
sub $3, $8, $3
add $3, $3, $29
lw $2, 0($3)
lw $8, 0($29)
addi $29, $29, 4
lw $31, 16($29)
lw $30, 12($29)
addiu $29, $29, 20
jr $31
nop


