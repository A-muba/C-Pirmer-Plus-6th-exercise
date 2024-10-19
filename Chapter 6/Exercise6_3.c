# include <stdio.h>

int main(){
    // Exercise 6.3
    printf("Exercise 6.3:\n");

    for (int col=1; col<=6; col++){
        for (int vet=6; vet>6-col; vet--)
            printf("%c", 'A'+vet-1);
        printf("\n");
    }

    return 0;
}