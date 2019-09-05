/*
Program Name: Input Operation
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b, c;

    /* Input only first 3 integer in 2 step (space between two input) and ignore other */
    printf("Input two integer number more than three digit: ");
    scanf("%3d", &a);
    printf("%d\n", a);
    scanf("%d", &b);
    //printf("%d\n", b);

    scanf("%3d", &a);
    printf("%d\n", a);
    scanf("%d", &b);
    //printf("%d\n", b);

    /*This is equivalent of above*/
    printf("\nInput Again\n");

    scanf("%3d%*d%3d%*d",&a, &b);
    printf("%d %d", a, b);

    /*here 3rd variable produce garbage output because no value assign to it*/
    printf("\nInput four integer number\n");

    scanf("%d%*d%d%*d",&a, &b, &c);
    printf("%d %d %d", a, b, c);

    /*Use ignore character between two input or more*/
    printf("\nEnter a date(day-month-year)\n");

    int day, month, year;

    scanf("%d-%d-%d",&day, &month, &year);
    printf("Day: %d Month: %d Year: %d", day, month, year);

    return 0;
}
