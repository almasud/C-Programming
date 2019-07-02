/*
Program Name: Pointer-Example: 01
Author: Abdullah Almasud
*/
#include<stdio.h>

int main()
{
    int i = 3;
    int *j;
    j = &i;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("*j = %d\n", *j);

    return 0;
}
