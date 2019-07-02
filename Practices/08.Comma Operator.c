/*
Program Name: Comma operator
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b, cma;

    cma = (a = 5, b = 6, a + b);
    printf("%d", cma);

    return 0;
}
