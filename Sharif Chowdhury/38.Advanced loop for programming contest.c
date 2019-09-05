/*
Program Name: Advanced loop for programming contest
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

   int i, j, n, sum, T, a;

   scanf("%d", &T);

   for(i=1; i<=T; i++){
        scanf("%d", &n);
        sum = 0;
        for(j=1; j<=n; j++){
            scanf("%d", &a);
            sum = sum + a;
        }
        printf("Test Case#%d: %d\n", i, sum);

   }

    return 0;
}


