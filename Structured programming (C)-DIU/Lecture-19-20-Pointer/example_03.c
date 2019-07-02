/*
Program Name: Pointer-Example: 03 (Work to your brain)
Author: Abdullah Almasud
*/
#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,12}, *p, *q, i;
    p = &a[2];
    q = &a[5];
    i = *q-*p;
    printf("The value of i is: %d\n", i);
    i= *p-*q;
    printf("The value of i is: %d\n", i);
    a[2] = a[5] = 0;
    printf("The value of i is: %d\n", i);

    return 0;
}
