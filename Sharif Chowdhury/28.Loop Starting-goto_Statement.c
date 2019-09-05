/*
Program Name: Loop staring goto Statement
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a = 1;

    start:

        printf("%d ", a);
        a++;

        if(a <= 7)
            goto start;


    return 0;
}


