#include<stdio.h>

main()
{
    char str1[50], str2[50];

    /* Using strncmp() to compare first n number of string to another */
    printf("\nUsing strncmp() to compare first n number of string to another.\n");

    printf("Enter first string: \n");
    gets(str1);
    printf("Enter second string: \n");
    gets(str2);
    int temp;
    printf("Enter number of second string to compare first: \n");
    scanf("%d", &temp);

    int temp_int = strncmp(str1, str2, temp);
    if(temp_int == 0)
    {
        printf("Both string are same\n");
    }
    else if(temp_int > 0)
    {
        printf("First string is greater than second string\n");
    }
    else
    {
        printf("Second string is greater than first string\n");
    }


}
