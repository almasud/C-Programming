/*
Program Name: Operator(1) Arithmetic Operator
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    /* There are two type of arithmetic operator
    1.Integer arithmetic operator + - * / %
    2.Real arithmetic operator + - * /
    */
    int num1 = 5, num2 = 2, num3;
    num3 = num2 % num1;
    printf("num2 \%% num1 = %d", num3);

    return 0;
}
