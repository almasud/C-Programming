/*
Program Name: 77.Function Basic(Return value and function prototype)
Author: Abdullah Almasud
*/
#include<stdio.h>

/*Function prototype or declaration*/
int abs(int, int);
int add(int, int);

int main(){

    printf("%d\n", abs(-5, -7)); /*Function calling*/

    return 0;
}
/*Function definition*/
int abs(int a, int b){

    int result = add(a, b);
    if(result < 0)
        return -result;
    else
        return result;
}

int add(int a, int b){

    return a+b;
}
