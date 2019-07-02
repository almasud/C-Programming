/*
Program Name: Print a reverse string.
Author: Abdullah Almasud.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter a string to reverse: \n");
    scanf("%[^\n]s", &str);

    printf("Your reverse string is: %s\n", strrev(str));
}
