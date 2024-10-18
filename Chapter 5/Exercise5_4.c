# include <stdio.h>

int main(){
    // Exercise 5.4
    printf("Exercise 5.4:\n");
    float height;
    printf("Enter a height in centimeters: ");
    scanf("%f", &height);

    while (height>0){
        printf("%.1f cm = %d feet, %.1f inches\n", height, (int)(height/2.54)/12, (height/2.54)-(int)(height/2.54)/12*12);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
    }
    printf("bye\n");

    return 0;
}