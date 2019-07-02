/*
Program Name: Using strncmp() to compare first n number of string to another.

Author: Abdullah Almasud.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];
    int n;
    printf("Enter first string: \n");
    gets(str1);
    printf("Enter second string: \n");
    gets(str2);
    printf("Enter number of 2nd string to compare first: \n");
    scanf("%d",&n);

    int check = strncmp(str1, str2, n);
    if(check == 0)
    {
        printf("Both string are same.\n");
    }
    else if(check > 0)
    {
        printf("String1 is greater than String2.\n");
    }
    else
    {
        printf("String1 is less than String2.\n");
    }

    return 0;

}
