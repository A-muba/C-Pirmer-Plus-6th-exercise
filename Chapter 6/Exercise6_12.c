# include <stdio.h>

float equation_1(int n);
float equation_2(int n);

int main(){
    // Exercise 6.12
    printf("Exercise 6.12:\n");
    int num1, num2;

    printf("Enter two number as end of equation 1 and 2: ");
    
    while (scanf("%d %d", &num1, &num2) == 1, num1>0, num2>0){
        printf("The sum of equation 1 is %.2f\n", equation_1(num1));
        printf("The sum of equation 2 is %.2f\n", equation_2(num2));
        printf("Enter two number as end of equation 1 and 2: ");
    }
    printf("Done\n");

    return 0;
}

float equation_1(int n){
    float sum=0;
    for (int i=1; i<=n; i++)
        sum += 1.0/(float)i;

    return sum;
}

float equation_2(int n){
    float sum=0;
    int sign=-1;

    for (int i=1; i<=n; i++){
        sign *= -1;    
        sum += sign*1.0/(float)i;
    }

    return sum;
}