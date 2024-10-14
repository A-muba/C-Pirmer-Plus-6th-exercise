# include <stdio.h>

void smile();

int main(){
    // Exercise 2.7
    printf("Exercise 2.7:\n");
    
    for (int i=0; i<3; i++){
        for (int j=3-i; j>0; j--)
            smile();
        printf("\n");
    }

    return 0;
}

void smile(){
    printf("Smile!");
}