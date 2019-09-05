/*
Program Name: Problem solve 00
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b;
    a = 5;
    b = 6;

    (a == b) ? printf("%d is equal to %d\n", a, b) : ((a > b) ? printf("%d is greater than %d\n", a, b) : printf("%d is less than %d\n", a, b));

    return 0;
}
