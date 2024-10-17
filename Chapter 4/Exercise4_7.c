# include <stdio.h>
# include <float.h>

int main(){
    // Exercise 4.7
    printf("Exercise 4.7:\n");
    float num1 = 1.0/3.0;
    double num2 = 1.0/3.0;

    printf("First show -->\t%.6f %.6lf\n", num1, num2);
    printf("Second show -->\t%.12f %.12lf\n", num1, num2);
    printf("Third show -->\t%.16f %.16lf\n", num1, num2);
    printf("Precition: float & double -->\t%d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}