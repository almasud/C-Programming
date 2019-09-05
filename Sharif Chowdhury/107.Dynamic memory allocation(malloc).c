/*
Topic: 107.Dynamic memory allocation(malloc)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int a[100];
    /* The size of a array and ptr is same and we can use ptr as an array */
    ptr = (int*)malloc(100*sizeof(int));
    a[0] = 5;
    ptr[0] = 10;
    printf("a[0] = %d and ptr[0] = %d\n", a[0], ptr[0]);
    /*We can change the size of ptr dynamically by malloc function
    anytime but we lost those data before we assign*/
    ptr = (int*)malloc(10*sizeof(int));
    //int a[10]; //We can't change the array size once we declared.
    //Now ptr[0] show a garbage value.
    printf("a[0] = %d and ptr[0] = %d\n", a[0], ptr[0]);
    free(ptr);

    return 0;
}

