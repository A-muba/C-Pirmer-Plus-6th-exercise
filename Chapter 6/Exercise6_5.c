# include <stdio.h>

int main(){
    // Exercise 6.5
    printf("Exercise 6.5:\n");
    char ch;

    printf("Please input a character(Capital letter): ");
    scanf("%c", &ch);

    for (int col=0; col<=ch-65; col++){
        for (int former_space=0; former_space<ch-65-col; former_space++)
            printf(" ");

        for (char ch_place_inc='A'; ch_place_inc<=65+col; ch_place_inc++)
            printf("%c", ch_place_inc);
        
        for (char ch_place_dec=64+col; ch_place_dec>=65; ch_place_dec--)
            printf("%c", ch_place_dec);
        
        for (int later_space=0; later_space<ch-65-col; later_space++)
            printf(" ");   

        printf("\n");
    }

    return 0;
}