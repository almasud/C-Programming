/*
Topic: 108.Dynamic memory allocation(calloc)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    //ptr = (int *)malloc(10 * sizeof(int));
    ptr = (int *)calloc(10 , sizeof(int));
    ptr[1] = 10;
    //printf("Address of ptr is: %d\n", &ptr[1]);
    printf("%d\n", ptr[1]);

    ptr = (int *)calloc(20 , sizeof(int));
    /* Due to increase size the before data is lost.calloc() assign by default 0 value and therefore we can use calloc() to pointer instead of an array */
    printf("%d\n", ptr[1]);

    free(ptr);

    return 0;
}

