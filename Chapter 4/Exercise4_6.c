# include <stdio.h>

int main(){
    // Exercise 4.6
    printf("Exercise 4.6:\n");
    char first_name[20], last_name[20];

    printf("Please input your name:\n");
    scanf("%s %s", first_name, last_name);
    printf("Your name -->%s %s\n", first_name, last_name);
    printf("Your name -->%*d %*d\n", strlen(first_name), strlen(first_name), 
    strlen(last_name), strlen(last_name));
    printf("Your name -->%-*d %-*d\n", strlen(first_name), strlen(first_name), 
    strlen(last_name), strlen(last_name));

    return 0;
}