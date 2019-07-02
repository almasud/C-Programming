/*
Topic: 116.File Management(EOF)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>


int main(){

    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);

    int n;
    /* scanf() function return 1 when it successfully get input otherwise
    return -1.The value of EOF is -1 */
    while(scanf("%d", &n) != EOF)
        printf("%d\n", n);


    return 0;
}
