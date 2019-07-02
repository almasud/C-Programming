/*
Program Name: Rules for scanf()
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int i;
    float f;
    char c;

    printf("Enter an integer and a float number respectively: ");
    scanf("%d%f", &i, &f);
    printf("%d %.2f", i, f);

    /*But when space between integer and character then it read space as a character.*/
    printf("\n\n");
    printf("Enter an integer and a character respectively: ");
    scanf("%d%c", &i, &c);
    printf("%d %c", i, c);

    return 0;
}
