# include <stdio.h>
# include <string.h>

int main(){
    // Exercise 6.7
    printf("Exercise 6.7:\n");
    char word[40];

    printf("Please input your word: ");
    scanf("%s", word);
    
    for (int order=0; order<=strlen(word); order++)
        printf("%c", word[strlen(word)-order]);
    printf("\n");

    return 0;
}

