/*
Problem: Header file (stdio.h -> printf(), scanf(), gets(), puts(), getchar(), putchar())
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    char str[100], ch;
    gets(str);
    puts(str);

    ch = getchar();
    putchar(ch);

    return 0;

}
