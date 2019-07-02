/*
Topic: 104.sizeof() function and structure memory size.
Author: Abdullah Almasud
*/
#include<stdio.h>

/* A structure memory size depends on maximum data type's and it's
multiplicator or factor memory size */
struct Structure{
    int a;
    float b;
    double c;
    char d;
    char e;
    char f;
};


int main(){

    struct Structure s;
    printf("%d", sizeof(s));

    return 0;
}
