def xor(a, b):
    return a ^ b

def xnor(a, b):
    return int(not (a ^ b))

def xnor3(x, y, c):
    return int(not (x ^ y ^ c))

print("A B C | X=A⊕B Y=A⊙B F=¬(X⊕Y⊕C)")
for A in [0, 1]:
    for B in [0, 1]:
        for C in [0, 1]:
            X = xor(A, B)
            Y = xnor(A, B)
            F = xnor3(X, Y, C)
            print(f"{A} {B} {C} |    {X}     {Y}     {F}")