/*
Program Name: All loops advanced
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

   int a = 5, i, n;

   for(i=1; i<=a; i++){
     printf("%d ", i);
   }
    printf("\n");
    /*Equivalent for loop*/
    i = 1;
    for(; i<=a; ){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    scanf("%d", &n);
    while(n != 0){
        printf("%d\n", n);
        scanf("%d", &n);
    }
    /*Equivalent while loop*/
    while(scanf("%d", &n) && n!=0){
        printf("%d\n", n);
    }

    return 0;
}


