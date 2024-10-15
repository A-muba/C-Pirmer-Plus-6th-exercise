# include <stdio.h>

int main(){
    // Exercise 3.4
    printf("Exercise 3.4:\n");
    float input;
    
    printf("Enter a floating-point value: ");
    scanf("%f", &input);
    printf("fixed-point notation: %.6f\n", input);
    printf("exponemtial notation: %.6e\n", input);
    printf("p notation: %a\n", input);

    return 0;
}