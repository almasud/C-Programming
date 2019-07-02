/*
Program Name: 80.Function(Use of pointer)
Author: Abdullah Almasud
*/
#include<stdio.h>

void inc(int *a){

    (*a)++;

}

void main(){

    int a = 5;

    printf("Before inc: %d\n", a);
    inc(&a);
    printf("After inc: %d\n", a);

    return;
}
