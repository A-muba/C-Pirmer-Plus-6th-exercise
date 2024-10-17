# include <stdio.h>
# define INCH 12

int main(){
    // Exercise 4.4
    printf("Exercise 4.4:\n");
    float height;

    printf("Please input your height(inch):\n");
    scanf("%f", &height);
    printf("Dabney, you are %.3f feet tail.\n", height/INCH);

    return 0;
}