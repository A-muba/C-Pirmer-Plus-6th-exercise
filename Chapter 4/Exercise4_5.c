# include <stdio.h>

int main(){
    // Exercise 4.5
    printf("Exercise 4.5:\n");
    float megabit_per_sec, file_storage;

    printf("Please input velocity of data transfer and storage of file:\n");
    scanf("%f %f", &megabit_per_sec, &file_storage);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", megabit_per_sec, file_storage);
    printf("download in %.2f seconds.\n", file_storage*8/megabit_per_sec);

    return 0;
}