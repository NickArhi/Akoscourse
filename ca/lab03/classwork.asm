.text
li a7, 5
ecall
mv t0, a0 #N
ecall
mv t1, a0 #D
mv t2, zero #Q

while:
add x0, x0, x0
bltu t0, t1, end
addi t2, t2, 1
sub t0, t0, t1
j while
end:

li a7, 36
mv a0, t2
ecall

li a7, 11
li a0, '\t'
ecall

li a7, 36
mv a0, t0
ecall
