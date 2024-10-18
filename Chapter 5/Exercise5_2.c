# include <stdio.h>

int main(){
    // Exercise 5.2
    printf("Exercise 5.2:\n");
    int input_num, show_num;

    printf("Please input a number: ");
    scanf("%d", &input_num);
    show_num = input_num;

    while (input_num<=10+show_num){
        printf("%2d\n", input_num);
        input_num++;
    }

    return 0;
}