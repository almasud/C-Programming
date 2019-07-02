/*
Program Name: Problem solve 01 - Interchange value between tow variables
using two variables.

Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b;
    a = 10;
    b = 21;

    printf("Before Interchange a = %d and b = %d\n", a, b);

    a = a - b;
    b = b + a;
    a = b - a;

    printf("After Interchange a = %d and b = %d\n", a, b);

    return 0;
}
