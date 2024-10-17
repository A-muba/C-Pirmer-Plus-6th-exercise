# include <stdio.h>

int main(){
    // Exercise 4.1
    printf("Exercise 4.1:\n");

    char first_name[40], last_name[40];
    printf("Please input your name:\n");
    scanf("%s %s", first_name, last_name);
    printf("Your name is %s.%s.\n", first_name, last_name);

    return 0;
}