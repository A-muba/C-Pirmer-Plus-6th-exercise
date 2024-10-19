# include <stdio.h>

int main(){
    // Exercise 6.18
    printf("Exercise 6.18\n");
    int friend = 5;
    int week = 0;

    while (friend<=150){
        week++;
        friend = 2*(friend-week);
        printf("After %2d week, Rabnud has %3d friends.\n", week, friend);
    }

    return 0;
}