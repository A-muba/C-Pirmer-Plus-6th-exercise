# include <stdio.h>

int main(){
    // Exercise 3.7
    printf("Exercise 3.7:\n");
    float inch_per_cm = 2.54; // 1inch == 2.54cm
    float height;

    printf("Please input your height(inch): ");
    scanf("%f", &height);
    printf("Your height is %.2f cm.\n", height*inch_per_cm);
    return 0;
}