/*
Program Name: Problem solve 01 - Interchange value between tow variables
using tree variables.

Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b, c;
    a = 5;
    b = 6;

    printf("Before Interchange a = %d and b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After Interchange a = %d and b = %d\n", a, b);

    return 0;
}
