/*
Program Name: Using strrev() to reverse and using strncpy to copy first n number of a string.

Author: Abdullah Almasud.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], copy[50], paste[50]={""};
    int n;

    printf("Enter a string to reverse: \n");
    gets(str);
    printf("Your reverse string is: %s\n",strrev(str));
    printf("Enter a string to copy: \n");
    gets(copy);
    printf("Enter character number to copy : \n");
    scanf("%d",&n);
    printf("Your paste string is: %s\n",strncpy(paste, copy, n));

    return 0;
}
