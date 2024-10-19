# include <stdio.h>

int main(){
    // Exercise 6.17
    printf("Exercise 6.17:\n");
    float money = 100;
    int year = 0;

    while(money>0){
        money += money*0.08;
        money -= 10;
        year++;
        printf("She left $%5.2f, After %2d year.\n", money, year);
    }

    printf("After %d years, Chuckie will take all the money.\n", year);

    return 0;
}