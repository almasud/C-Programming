/*
Topic: 106.Dynamic memory allocation(Intro)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, x;
    //void x; // we can't declare a variable of void type.
    //void *ptr; // we can declare a variable of void type.

    //ptr = &x;
    /* malloc() function return a void type pointer.so it should be cast and we can assign an
    address to pointer my malloc() function instead of extra variable(above x) */
    ptr = (int *)malloc(sizeof(int));
    //x = 5;
    *ptr = 5; // Now we can assign a value to pointer.

    printf("%d\n", ptr); //malloc() is allocate the address randomly.(address is not fixed)
    printf("%d\n", *ptr);
    free(ptr); // we will must be use free() when we use malloc() to free memory.

    return 0;
}

