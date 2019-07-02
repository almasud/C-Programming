/*
Topic: 109.Dynamic memory allocation(realloc)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    ptr[1] = 10;
    //printf("Address of ptr is: %d\n", &ptr[1]);
    printf("%d\n", ptr[1]);
    /*Now we use realloc() for increase memory size.Due to increase size the
    before data is not lost.*/
    ptr = (int *)realloc(ptr , 20 * sizeof(int));

    printf("%d\n", ptr[1]);

    free(ptr);

    return 0;
}

