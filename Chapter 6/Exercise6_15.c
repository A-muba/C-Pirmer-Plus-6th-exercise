# include <stdio.h>
# include <string.h>

int main(){
    // Exercise 6.15
    printf("Exercise 6.15:\n");
    char input[40];

    printf("Enter the word(less than 40 alphabet): ");
    scanf("%s", input);

    for (int i=strlen(input); i>=0; i--)
        printf("%c ", input[i]);
    printf("\n");

    return 0;
}