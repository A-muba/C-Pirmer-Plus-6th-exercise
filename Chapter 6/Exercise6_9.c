# include <stdio.h>

float calculation(float num1, float num2);

int main(){
    // Exercise 6.9
    printf("Exercise 6.9:\n");
    float num1, num2, result;

    printf("Please input 2 numbers: ");
    
    while(scanf("%f %f", &num1, &num2)==2){
        result = calculation(num1, num2);
        printf("Result equal to %f\n", result);
        printf("Please input 2 numbers: ");
    } 
    printf("Done!\n");

    return 0;
}

float calculation(float num1, float num2){
    return (num1-num2)/(num1*num2);
}