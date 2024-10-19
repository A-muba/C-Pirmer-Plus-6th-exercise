# include <stdio.h>

int main(){
    // Exercise 6.4
    printf("Exercise 6.4:\n");

    for (int col=0; col<=5; col++){
        for (int vet=0; vet<=col; vet++)
            printf("%c", 'A'+(col+1)*col/2+vet);
        printf("\n");
    }

    return 0;
}