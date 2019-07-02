/*
Program Name: String handler function using string.h

Author: Abdullah Almasud.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];

    printf("Program Name: String handler function using string.h\nAuthor: Abdullah Almasud.\n");
    /* Using strlen() */
    printf("\nUsing strlen() to calculate length of string.\n");
    printf("\nEnter a string to calculate the length.\n");
    gets(str1);
    printf("The length of the string is: %d\n",strlen(str1));


    /* Using strcpy() */
    printf("\nUsing strcpy() to one string to another string.\n");
    printf("Enter your string to copy.\n");
    gets(str1);

    strcpy(str2, str1);
    printf("Your paste string is: %s\n",str2);

    /* Using strcat()*/
    printf("\nUsing strcat() to join two string.\n");
    printf("Enter first string: \n");
    gets(str1);
    /* Add a blank space into two string */
    char temp_char[] = {" "};
    strcat(str1,temp_char);

    printf("Enter second string: \n");
    gets(str2);

    strcat(str1, str2);
    printf("The join string is: %s\n",str1);

    /* Using strcmp to compare first string with second in sensitively. */
    printf("\nUsing strcmp to compare first string with second in sensitively.\n");
    printf("Enter first string: \n");
    gets(str1);
    printf("Enter second string: \n");
    gets(str2);

    int temp_int;
    temp_int = strcmp(str1, str2);
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
    /* Using strncmpi() to compare first string with second in insensitively. */
    printf("\nUsing strcmp to compare first string with second in insensitively.\n");
    printf("Enter first string: \n");
    gets(str1);
    printf("Enter second string: \n");
    gets(str2);

    temp_int = strcmpi(str1, str2);
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

    /* Using strlwr() and strupr() to convert upper to lower and lower to upper string */
    printf("\nUsing strlwr() and strupr() to convert upper to lower and lower to upper string.\n");
    printf("Enter upper string to convert lower: \n");
    gets(str1);
    printf("Converted string is: %s\n", strlwr(str1));

    printf("Enter lower string to convert upper: \n");
    gets(str2);
    printf("Converted string is: %s\n", strupr(str2));

    return 0;
}
