/*
Program Name: Counting length of the string.

Author: Abdullah Almasud.
*/

#include<stdio.h>

main()
{

    char string[50];
    int i = 0, length = 0;

    printf("Enter your string: \t");
    scanf("%[^\n]s", &string);

    while(string[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Your string length is: %d\n", length);
}
