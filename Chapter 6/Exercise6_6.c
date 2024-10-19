# include <stdio.h>

int main(){
    // Exercise 6.6
    printf("Exercise 6.6:\n");
    int upper_limit, lower_limit;

    printf("Please input the upper limit and lower limit: ");
    scanf("%d %d",&upper_limit, &lower_limit);
    printf(" n    n^2   n^3\n");

    for (;lower_limit<=upper_limit;lower_limit++)
        printf("%2d %5d %5d\n", lower_limit, lower_limit*lower_limit, 
        lower_limit*lower_limit*lower_limit);

    return 0;
}