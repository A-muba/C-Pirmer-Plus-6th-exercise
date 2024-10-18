# include <stdio.h>

int main(){
    // Exercise 5.6
    printf("Exercise 5.6\n");
    int count = 0, sum= 0, day;
    
    printf("Please input the number of day: ");
    scanf("%d", &day);
    while (count++<day)
        sum = sum+count*count;
    printf("sum = %d\n", sum);

    return 0;
}