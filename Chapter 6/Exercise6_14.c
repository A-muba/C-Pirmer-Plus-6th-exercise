# include <stdio.h>

double sum_list_make(double num[], double sum[]);

int main(){
    // Exercise 6.14
    printf("Exercise 6.14\n");
    double number[8], sum[8];

    printf("Enter the number for NUMBER list(8 number): ");
    
    for(int i=0; i<8; i++) 
        scanf("%lf", &number[i]);
    *sum = sum_list_make(number, sum);      
    printf("number  sum\n");

    for(int k=0; k<8; k++)
        printf("%5.2lf %5.2lf\n",number[k], sum[k]); 

    return 0;
}

double sum_list_make(double num[], double sum[]){
    for(int j=0; j<8; j++)
        sum[j] = num[j] + sum[j-1];
    return *sum;
}