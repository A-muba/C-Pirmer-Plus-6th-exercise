# include <stdio.h>

int main(){
    // Exercise 4.3
    printf("Exercise 4.3:\n");

    float num;
    printf("Please input the number:\n");
    scanf("%f", &num);
    printf("In decimal counting method -->\t%.2f\n", num);
    printf("In exponential counting method -->\t%.2e\n", num);

    return 0;
}