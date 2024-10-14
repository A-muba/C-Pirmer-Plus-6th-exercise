# include <stdio.h>

void two();
void one_three();

int main(){
    // Exercise 2.8
    printf("Exercise 2.8:\n");
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void two(){
    printf("two\n");
}

void one_three(){
    printf("one\n");
    two();
    printf("three\n");
}