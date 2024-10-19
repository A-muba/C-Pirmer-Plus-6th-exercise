# include <stdio.h>

int boundry_sqe(int n1, int n2);

int main(){
    // Exercise 6.10
    printf("Exercise 6.10:\n");
    int upper_limit, lower_limit;

    for (;printf("Enter lower and upper integer limits: "), 
    scanf("%d %d", &lower_limit, &upper_limit)==2, lower_limit<upper_limit;)
        printf("The sums of the squares from %d to %d is %d\n", 
        lower_limit, upper_limit, boundry_sqe(lower_limit, upper_limit));   
    printf("Done\n");

    return 0;
}

int boundry_sqe(int n1, int n2){
    int result=0;

    for(;n1<=n2; n1++) 
        result += n1*n1;

    return result;
}