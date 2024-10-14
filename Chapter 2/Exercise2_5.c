#include <stdio.h>

void br();
void ic();

int main(){
    // Exercise 2.5
    printf("Exercise 2.5:\n");
    br(); printf(", "); ic(); printf("\n");
    ic(); printf(",\n");
    br(); printf("\n");
    
    return 0;
}

void br(){
    printf("Brazil, Russia");
}

void ic(){
    printf("India, China");
}