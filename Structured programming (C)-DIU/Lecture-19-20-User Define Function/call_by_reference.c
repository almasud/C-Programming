/*
Program Name: Function call by reference
Author: Abdullah Almasud
*/
#include<stdio.h>

int sum (int *, int *);

int main()
{
    int a, b;
    a = 5;
    b = 6;
    printf("Value of a is: %d\n", a);
    printf("Address of a is: %d\n", &a);
    printf("Value of b is: %d\n", b);
    printf("Address of b is: %d\n", &b);

    sum(&a, &b);

    return 0;
}
int sum (int *x, int *y)
{
    int *a, *b;
    a = &x;
    b = &y;

    printf("Value of x is: %d\n", *a);
    printf("Address of x is: %d\n", a);
    printf("Value of y is: %d\n", *b);
    printf("Address of y is: %d\n", b);
    printf("Sum of the value of a and b is: %d\n", *x+*y);
    printf("Sum of the address of a and b is: %d\n", *a+*b);

    return 0;
}

