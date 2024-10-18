# include <stdio.h>

int main(){
    // Exercise 5.5
    printf("Exercise 5.5:\n");
    int count = 0, sum= 0, day;
    
    printf("Please input the number of day: ");
    scanf("%d", &day);
    while (count++<day)
        sum = sum+count;
    printf("sum = %d\n", sum);

    return 0;
}
