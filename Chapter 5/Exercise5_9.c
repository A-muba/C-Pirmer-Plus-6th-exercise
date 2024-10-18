# include <stdio.h>

void Temperatures(double F_temp);

int main(){
    // Exercise 5.9
    printf("Exercise 5.9:\n");
    double F_temp;
    int detc_scanf;

    printf("Please input the Fahrenheit temperture: ");
    detc_scanf = scanf("%lf", &F_temp);

    while (detc_scanf==1){
        Temperatures(F_temp);
        printf("Please input the Fahrenheit temperture: ");
        detc_scanf = scanf("%lf", &F_temp);
    }    
    printf("Done!\n");

    return 0;
}

void Temperatures(double F_temp){
    const double C_TO_K = 273.16;
    printf("Temperature in Fahrenheit: %.2lf\n", F_temp);
    printf("Temperature in Celsius: %.2lf\n", 5.0/9.0*(F_temp-32.0));
    printf("Temperature in Kelvin: %.2lf\n", 5.0/9.0*(F_temp-32.0)+C_TO_K);
}