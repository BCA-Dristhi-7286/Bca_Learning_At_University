//Convert an decimal to its binary equivalent using a bitwise operator

#include <stdio.h>

int main() {
    int N = 7;
    int binary = 0;
    int bit_position = 1;
    
    while (N > 0) {
        int bit = N % 2;
        binary += bit * bit_position;
        bit_position *= 10;
        N /= 2;
    }
    
    printf("Decimal %d in binary is %d\n", N, binary);
    
    return 0;
}

