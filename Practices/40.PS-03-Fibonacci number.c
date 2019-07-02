/*
Program Name: PS-03 Fibonacci Computing
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int n, i, a, b, c, T, t_count = 1;

    printf("Enter test case: ");
    scanf("%d", &T);
    /*When T-- will be zero it's return false and exit loop*/
    while(T--){

        printf("Enter an integer number for Fibonacci Series: ");
        scanf("%d", &n);
        printf("Test Case#%d: ", t_count++);
        a = 0, b = 1;

        for(i=1; i<=n; i++){

            printf("%d ", a);

            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");

    }

    return 0;
}



