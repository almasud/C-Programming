/*
Program Name: Find factorial number using recursion.
Author: Abdullah Almasud.
*/
#include<stdio.h>

int fib(int);
int main()
{
    int n, i;
    printf("Enter a number to show Fibonacci series: \n");
    scanf("%i", &n);
    printf("Fibonacci series till %i number: ", n);

    for(i=0; i<n; i++)
    {
        printf("%i ", fib(i));
    }
    printf("\n");

    return 0;
}
int fib(int n)
{
    if(n>1)
    {
        return fib(n-1)+fib(n-2);
    }
    else
    {
        return n;
    }
}
