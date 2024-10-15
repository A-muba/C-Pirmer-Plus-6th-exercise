# include <stdio.h>

int main(){
    // Exercise 3.6
    printf("Exercise 3.6:\n");
    float H2O_mole_per_g = 3e-23; // 1 H2O molecule == 3.0*10^(-23) g
    int quart_per_g = 950; // 1 Quart == 950 g
    float quart_num;
    
    printf("Please input the number of water quart: ");
    scanf("%f", &quart_num);
    printf("The number of H2O molecule is: %.2f\n", (quart_num*quart_per_g) / H2O_mole_per_g);

    return 0;
}