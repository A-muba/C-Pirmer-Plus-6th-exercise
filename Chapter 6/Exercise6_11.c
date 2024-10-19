# include <stdio.h>

int main(){
    // Exercise 6.11
    printf("Exercise 6.11:\n");
    int list[11] = {3, 4, 2, 1, 6, 7, 9, 5, 0, 8};
    int lower_limit, upper_limit;

    while(printf("Enter the lower and upper limit numbers:"),
    scanf("%d %d", &lower_limit, &upper_limit)==2, lower_limit<upper_limit){
        for (; lower_limit<=upper_limit; upper_limit--)
            printf("%3d", list[upper_limit]);
        printf("\n");
    }
    printf("Done\n");

    return 0;
}