# include <stdio.h>

int main(){
    // Exercise 5.3
    printf("Exercise 5.3:\n");

    int day;
    printf("Please input the number of day: ");
    scanf("%d", &day);
    
    while (day>0){
        printf("%d day are %d weeks, %d days.\n", day, day/7, day%7);
        printf("Please input the number of day: ");
        scanf("%d", &day);
    }
    printf("Done!");

    return 0;
}