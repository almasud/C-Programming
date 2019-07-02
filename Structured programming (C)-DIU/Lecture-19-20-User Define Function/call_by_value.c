/*
Program Name: Function call by value
Author: Abdullah Almasud
*/
#include<stdio.h>

int sum(int, int);
int main()
{
    int a=4 , b=5;
    printf("Sum = %d\n", sum(a, b));
    printf("Sum = %d\n", a+b);

    return 0;
}
int sum(x, y)
{
    x++;
    y++;

    return (x+y);
}
