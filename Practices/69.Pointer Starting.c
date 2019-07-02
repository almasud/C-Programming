/*
Program Name: Pointer Starting
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    /*
    * = value of operator
    & = address of operator
    when we use
    int *p, x;
    p = &x;
    then it's called *p = value of p and p = address of p.
    */
    int a, *p;
    p = &a;
    *p = 5;

    printf("a = %d \t *p = %d\n", a, *p);

    a = 6;

    printf("a = %d \t *p = %d\n", a, *p);

    return 0;
}
