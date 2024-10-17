# include <stdio.h>
# include <string.h>

int main(){
    // Program 4.2
    printf("Program 4.2:\n");
    char first_name[20], last_name[20];
    int num_print2, num_print3;

    printf("Please input your name:\n");
    scanf("%s %s", first_name, last_name);
    printf("Your name -->\t" "\"%s %s\"\n", first_name, last_name);
    num_print2 = 20-1-strlen(last_name);
    printf("Your name -->\t" "\"%*s %s\"\n", num_print2, first_name, last_name);
    num_print3 = 20-1-strlen(first_name);
    printf("Your name -->\t" "\"%-s %-*s\"\n",first_name, num_print3, last_name);
    printf("Your name -->\t" "\"%*s %s\"\n", 3+strlen(first_name), first_name, last_name);

    return 0;
}