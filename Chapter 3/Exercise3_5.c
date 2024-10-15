# include <stdio.h>

int main(){
    // Exercise 3.5
    printf("Exercise 3.5:\n");
    float sec_in_year = 3.156e7;
    int age;
    
    printf("Please input the age: __\b\b");
    scanf("%d", &age);
    printf("The number of seconds corresponding the age is: %.1f\n", sec_in_year*age);

    return 0;
}