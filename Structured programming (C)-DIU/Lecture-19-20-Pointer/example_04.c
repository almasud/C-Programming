/*
Program Name: Pointer-Example: 04 (Work to your brain)
Author: Abdullah Almasud
*/
#include<stdio.h>

int main()
{
    int a[10]={2,3,4,5,6,7,8,9,1,0}, *p, *q;
    p = &a[2];
    q = p+3;
    p = q-1;
    p++;

    printf("The value of p and q are: %d and %d\n", *p, *q);

    return 0;
}
