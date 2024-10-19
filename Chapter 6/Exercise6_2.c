# include <stdio.h>

int main(){

    for (int col=1; col<=5; col++){
        for (int vet=1; vet<=col; vet++)
            printf("$");
        printf("\n");
    }

    return 0;
}