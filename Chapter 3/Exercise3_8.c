# include <stdio.h>

int main(){
    // Exercise 3.8
    printf("Exercise 3.8:\n");
    float pint_per_cup = 2;   // 1pint == 2cup
    int cup_per_ounce = 8;  // 1cup == 8ounce
    int ounce_per_tablespoon = 2; // 1ounce == 2tablespoon
    int tablespoon_per_teaspoon = 3; //1tablespoon == 3teaspoon
    int num_cup;

    printf("Please input the number of cup: ");
    scanf("%d", &num_cup);
    printf("Pint = %.2f\tCup = %d\n", num_cup/pint_per_cup, num_cup);
    printf("Ounce = %d\tTablespoon = %d\n", num_cup*cup_per_ounce, 
    num_cup*cup_per_ounce*ounce_per_tablespoon);
    printf("Teaspoon = %d\n", num_cup*cup_per_ounce*ounce_per_tablespoon*tablespoon_per_teaspoon);

    return 0;
}