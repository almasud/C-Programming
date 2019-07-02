/*
Program Name: Pointer-Example: 02
Author: Abdullah Almasud
*/
#include<stdio.h>

int main()
{
    int num = 10;
    int *pnum = NULL;
    pnum = &num;
    //*pnum += 20;

    printf("num = %d\n", num);
    printf("*pnum = %d\n", *pnum += 20);

    return 0;
}
