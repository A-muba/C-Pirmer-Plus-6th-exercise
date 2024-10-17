# include <stdio.h>

int main(){
    // Exercise 4.8
    printf("Exercise 4.8:\n");
    const float liter_per_gallons = 3.785;
    const float km_per_mile = 1.609;
    float mile_per_gallons, liter_per_100km;

    printf("Please input mile_per_gallon:\n");
    scanf("%f", &mile_per_gallons);
    liter_per_100km = 100*liter_per_gallons/(mile_per_gallons*km_per_mile);
    printf("Your number is %.2f mile/gallon.\n", mile_per_gallons);
    printf("It equal to %.2f liter/100km.\n", liter_per_100km);

    return 0;
}