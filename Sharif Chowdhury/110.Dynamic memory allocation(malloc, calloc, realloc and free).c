/*
Topic: 110.Dynamic memory allocation(malloc, calloc, realloc and free)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str;
    str = (int *)calloc(8, sizeof(char));

    strcpy(str, "Almasud");
    printf("%s\n", str);
    //free(str);
    str = (int *)realloc(str, 10 * sizeof(char));
    printf("%s\n", str);
    free(str);

    return 0;
}

