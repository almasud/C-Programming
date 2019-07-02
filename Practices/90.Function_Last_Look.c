/*
Program Name: 90.Function last look
Author: Abdullah Almasud
*/
#include<stdio.h>

int sum(int, int);
int doubleSum(int, int);

int main(){

    printf("%d\n", doubleSum(5, 6));

    return 0;
}

int sum(int a, int b){

    return a+b;
}

int doubleSum(int x, int y){

    return sum(x, y)+sum(x, y);
}
