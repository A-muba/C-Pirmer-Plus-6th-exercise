# include <stdio.h>

int main(){
    //Exercise 6.1
    printf("Exercise 6.1:\n");
    char alpah_list[27];

    for (int num=0; num<26; num++)
        alpah_list[num] = 97+num;
    printf("%s\n",alpah_list);

    return 0;
}
