# include <stdio.h>
# include <limits.h>

int main(){
    // Exercise 3.1
    printf("Exercise 3.1:\n");
    char char_max = CHAR_MAX; // 2^7-1, 1byte, 1 signed bit
    short short_max = SHRT_MAX; // 2^15-1, 2byte, 1 signed bit
    int int_max = INT_MAX;   // 2^31-1, 4byte, 1 signed bit
    long long_max = LONG_MAX;   // 2^63-1, 8byte, 1 signed bit
    long long long_long_max = LLONG_MAX; // 2^63-1, 8byte, 1 signed bit
    unsigned char unsigned_char_max = UCHAR_MAX; // 2^8-1, 1byte, no signed bit
    unsigned short unsigned_short_max = USHRT_MAX; // 2^16-1, 2byte, no signed bit
    unsigned int unsigned_int_max = UINT_MAX; // 2^32-1, 4byte, no signed bit
    unsigned long unsigned_long_max = ULONG_MAX; // 2^64-1, 8byte, no signed bit
    unsigned long long unsigned_long_long_max = ULLONG_MAX; // 2^64-1, 8byte, no signed bit

    printf("char_max = %hhd\tchar_max + 1 = %hhd\t\n", char_max, char_max+1);
    printf("short_max = %hd\tshort_max + 1 = %hd\t\n", short_max, short_max+1);
    printf("int_max = %d\tint_max + 1 = %d\t\n", int_max, int_max+1);
    printf("long_max = %ld\tlong_max + 1 = %ld\t\n", long_max, long_max+1);
    printf("long_long_max = %lld\tlong_long_max + 1 = %lld\t\n", long_long_max, long_long_max+1);
    printf("unsigned_char_max = %hhu\tunsigned_char_max + 1 = %hhu\t\n", unsigned_char_max, 
    unsigned_char_max+1);
    printf("unsigned_short_max = %hu\tunsigned_short_max + 1 = %hu\t\n", unsigned_short_max, 
    unsigned_short_max+1);
    printf("unsigned_int_max = %u\tunsigned_int_max + 1 = %u\t\n", unsigned_int_max, 
    unsigned_int_max+1);
    printf("unsigned_long_max = %lu\tunsigned_long_max + 1 = %lu\t\n", unsigned_long_max, 
    unsigned_long_max+1);
    printf("unsigned_long_long_max = %llu\tunsigned_long_long_max + 1 = %llu\t\n", unsigned_long_long_max, 
    unsigned_long_long_max+1);

    return 0;
}