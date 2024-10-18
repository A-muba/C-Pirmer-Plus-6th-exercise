# include <stdio.h>

void cubie(int n);

int main(){
    //Exercise 5.7
    printf("Exercise 5.7:\n");
    int num;

    printf("Please input the number: ");
    scanf("%d", &num);
    printf("Your number is:%4d\nThe square of number is:%4d\n", num, num*num);
    cubie(num);

    return 0;
}

void cubie(int n){
    printf("The cubie of number is:%4d\n", n*n*n);
}