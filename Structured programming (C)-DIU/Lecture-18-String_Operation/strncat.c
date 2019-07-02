/*
Program Name: Using strncat() to join first n number of string to another.

Author: Abdullah Almasud.
*/
#include<stdio.h>
#include<string.h>

int main()
{

    char src[50], dest[50], space[2] = {" "};
    int n;

    printf("Enter fist string: \n");
    strcat(gets(src), space);
    printf("Enter second string: \n");
    gets(dest);
    printf("Enter number of 2nd string to join first: \n");
    scanf("%d",&n);

    printf("Your string is: %s\n",strncat(src, dest, n));

    return 0;
}
