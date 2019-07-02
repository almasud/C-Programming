/*
Program Name: Find factorial number using recursion.
Author: Abdullah Almasud.
*/
#include<stdio.h>
long long fact(int);

int main()
{
    int n;
    printf("Enter a value less than 17 to calculate factorial: \n");
    scanf("%i", &n);

    if(n<17)
    {
         printf("The factorial of given number is: %i\n", fact(n));
    }
    else
    {
         printf("Enter less than 17 number to calculate factorial number\n");
    }

    return 0;
}
long long fact(int n)
{
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}
