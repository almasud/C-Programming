/*
Program Name: Pointer Closer look 1
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int x, y, *p, *q;
    p = &x, q = &y;

    x = 5, y = 6;

    printf("%d %d %d %d\n", x, *p, y, *q);
    y = 7, *p = 8;
    printf("%d %d %d %d\n", x, *p, y, *q);
    p = q;
    printf("%d %d %d %d\n", x, *p, y, *q);
    x = 12, y = 15;
    printf("%d %d %d %d\n", x, *p, y, *q);

    return 0;
}
