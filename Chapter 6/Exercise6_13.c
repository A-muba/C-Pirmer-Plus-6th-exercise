# include <stdio.h>
# include <math.h>

int main(){
    // Exercise 6.13
    printf("Exercise 6.13:\n");
    int list[9];
    int order=0;

    for (int i=0; i<8; i++)
        list[i] = pow(2,i);

    do{
        printf("%5d", list[order]);
        order += 1;
    }while(order<8);
    printf("\n");

    return 0;
}