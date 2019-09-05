/*
Program Name: Type casting
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a = 3, b = 2;
    float x = 3.555, y = 2.666;

    printf("%f\n", a/b);

    /* Up casting */
    printf("%.2f\n", (float)a/(float)b);

    /* Down casting */
    printf("%d\n", (int)x/(int)y);


    return 0;
}

