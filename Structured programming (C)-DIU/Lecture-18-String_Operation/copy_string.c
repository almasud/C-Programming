/*
Program Name: Copy one string to another string.

Author: Abdullah Almasud.
*/

#include<stdio.h>

main()
{
    char copy[50], paste[50];
    int i;

    printf("Enter your string to copy: \t");
    scanf("%[^\n]s", &copy);

    for(i=0; copy[i]!='\0'; i++)
    {
        paste[i] = copy[i];
    }
    paste[i] = '\0';

    printf("Your paste string is: %s", paste);
}
