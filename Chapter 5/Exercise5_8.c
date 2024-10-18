# include <stdio.h>

int main(){
    //Exercise 5.8
    printf("Exercise 5.8:\n");
    int first_num, second_num;

    printf("This program computes moduli\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second_num);
    printf("Now enter the first operand: ");
    scanf("%d", &first_num);

    while(first_num>0){
        printf("%d %% %d is %d\n", first_num, second_num, first_num%second_num);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &first_num);
    }
    printf("Done\n");

    return 0;
}