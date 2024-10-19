# include <stdio.h>

int main(){
    // Exercise 6.16
    printf("Exercise 6.16\n");
    int Daphne_money = 100, Deirdre_money = 100;
    int year=1;

    for (;Daphne_money>=Deirdre_money; year++){
        Daphne_money += 100*0.10;
        Deirdre_money += Daphne_money*0.05;
    }
    printf("After %d years, Deirdre's money is over than Daphne's money\n", year);
    printf("Deirdre got $%d, and Daphne got $%d.\n", Deirdre_money, Daphne_money);

    return 0;
}