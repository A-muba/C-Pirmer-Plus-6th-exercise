# include <stdio.h>

int main(){
    // Exercise 3.1
    printf("Exercise 3.1:\n");
    int int_max = __INT_MAX__;   // 2^31-1, 4byte, 1 signed bit
    unsigned int unsigned_int_max = __UINT32_MAX__; // 2^32-1, 4byte, no signed bit

    printf("int_max = %d\tint_max + 1 = %d\t\n", int_max, int_max+1);
    printf("unsigned_int_max = %u\tunsigned_int_max + 1 = %u\t\n", unsigned_int_max, 
    unsigned_int_max+1);

    return 0;
}