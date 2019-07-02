/*
Program Name: Check a string palindrome or not.
Author: Abdullah Almasud.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i, length, flag;
    flag = 0;

    printf("Enter your string to check palindrome or not: \n");
    scanf("%[^\n]s",&str);
    length = strlen(str);

    for(i=0; i<length; i++)
    {
        if(str[i] != str[length-i-1])
            flag = 1;
    }
    if(flag)
    {
        printf("%s string is not palindrome.\n", str);
    }
    else
    {
        printf("%s string is palindrome.\n", str);
    }

    return 0;
}
