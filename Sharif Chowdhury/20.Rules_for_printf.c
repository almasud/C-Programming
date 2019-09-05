/*
Program Name: Rules for printf()
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b;
    /*printf() function print every parameter from right hand side*/
    printf("%d %d %d\n", a = 5, b = 6, a + b); /* a+b print garbage value for uninitialized*/
    printf("%d %d %d\n", a + b, a = 5, b = 6); /* But a+b print real value for initialized*/

    return 0;
}
