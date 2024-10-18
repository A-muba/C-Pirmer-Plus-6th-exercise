# include <stdio.h>
# define HOUR_PER_MIN 60

int main(){
    // Exercise 5.1
    printf("Exercise 5.1:\n");
    int min, calc_min, calc_hour;

    printf("Please input the minute number(end if<=0): ");
    scanf("%d", &min);

    while(min>0){
        calc_hour = min / HOUR_PER_MIN;
        calc_min = min % HOUR_PER_MIN;
        printf("Your input is %d minutes, which is %d hour and %d minutes\n", min, calc_hour, calc_min);
        printf("Please input the minute number(end if<=0): ");
        scanf("%d", &min);
    }
    printf("Done!\n");

    return 0;
}
