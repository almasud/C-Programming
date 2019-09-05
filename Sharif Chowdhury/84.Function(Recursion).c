/*
Program Name: 84.Function(Recursion- Calculate Factorial Number)
Author: Abdullah Almasud
*/
#include<stdio.h>

int fact(int n){
    if(n == 1)
        return 1;
    else
        return n*fact(n-1);
}

int main(){

    int n;
    printf("Enter an integer number for factorial: ");
    scanf("%d", &n);
    printf("Factorial number is: %d\n", fact(n));

    return 0;
}
