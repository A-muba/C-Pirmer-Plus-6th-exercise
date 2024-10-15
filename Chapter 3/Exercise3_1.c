# include <stdio.h>

int main(){
    // Exercise 3.1
    printf("Exercise 3.1:\n");
    int int_max = __INT_MAX__;   // 2^31-1, 4byte, 1 signed bit
    long long_max = __LONG_MAX__;   //2^31-1, 4byte, 1 signed bit
    short short_max = 32767; //2^15-1, 2byte, 1 signed bit
    unsigned int unsigned_int_max = __UINT32_MAX__; // 2^32-1, 4byte, no signed bit
    unsigned long unsigned_long_max = __UINT32_MAX__; // 2^32-1, 4byte, no signed bit
    unsigned short unsigned_short_max = 65535; //2^16-1, 2byte, no signed bit

    printf("int_max = %d\tint_max + 1 = %d\t\n", int_max, int_max+1);
    printf("long_max = %ld\tlong_max + 1 = %ld\t\n", long_max, long_max+1);
    printf("short_max = %hd\tshort_max + 1 = %hd\t\n", short_max, short_max+1);
    printf("unsigned_int_max = %u\tunsigned_int_max + 1 = %u\t\n", unsigned_int_max, 
    unsigned_int_max+1);
    printf("unsigned_long_max = %lu\tunsigned_long_max + 1 = %lu\t\n", unsigned_long_max, 
    unsigned_long_max+1);
    printf("unsigned_short_max = %hu\tunsigned_short_max + 1 = %hu\t\n", unsigned_short_max, 
    unsigned_short_max+1);

    return 0;
}