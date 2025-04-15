#include <stdio.h>

int xor(int a, int b) {
    return a ^ b;
}

int xnor(int a, int b) {
    return !(a ^ b);
}

int xnor3(int x, int y, int c) {
    return !(x ^ y ^ c);
}

int main() {
    int A, B, C;
    printf("A B C | X=A⊕B Y=A⊙B F=¬(X⊕Y⊕C)\n");
    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            for (C = 0; C <= 1; C++) {
                int X = xor(A, B);
                int Y = xnor(A, B);
                int F = xnor3(X, Y, C);
                printf("%d %d %d |    %d     %d     %d\n", A, B, C, X, Y, F);
            }
        }
    }
    return 0;
}