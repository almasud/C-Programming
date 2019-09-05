/*
Program: Structure and Pointer (Descending Sort by value)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

struct Structure{
    char name[20];
    int value;
};

void swap(struct Structure *a, struct Structure *b){

    struct Structure temp;
    strcpy(temp.name, a->name);
    temp.value = a->value;

    strcpy(a->name, b->name);
    a->value = b->value;

    strcpy(b->name, temp.name);
    b->value = temp.value;

    return;
}

int main(){

    struct Structure val1, val2;
    printf("Enter your name and value1: ");
    scanf("%s%d", val1.name, &val1.value);
    printf("Enter your name and value2: ");
    scanf("%s%d", val2.name, &val2.value);

    if(val2.value > val1.value)
        swap(&val1, &val2);

    printf("name: %s and value: %d\n", val1.name, val1.value);
    printf("name: %s and value: %d\n", val2.name, val2.value);

    return 0;
}
