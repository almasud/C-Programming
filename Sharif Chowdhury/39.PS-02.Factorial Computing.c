/*
Program Name: PS-02 Factorial Computing
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int fact, n, i;

    while(scanf("%d", &n) != EOF){
        fact = 1;
        for(i=2; i<=n; i++){
            fact *= i;
        }
        /*We can use while loop instead of for loop*/
        /*
        while(n>1){
            fact  *= n;
            n--;
        }
        */
        printf("%d\n", fact);
    }

    return 0;
}


