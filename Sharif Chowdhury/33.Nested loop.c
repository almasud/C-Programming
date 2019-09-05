/*
Program Name: Nested loop
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

   int i, j, a, b;

   for(i=1; i<=5; i++){

    scanf("%d%d", &a, &b);
    /*for(j=a; j<=b; j++)
        printf("%d ", j); */

    /*Equivalent of above*/
    while(a <= b)
        printf("%d ", a++);

    printf("\n");

   }

    return 0;
}


