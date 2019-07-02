/*
Program Name : Program to test the character type.
Author Name : Abdullah Almasud.
*/
#include<stdio.h>
#include<ctype.h> /* Use ctype header file to use character function */

main(){

char character;

printf("Press any key\n");
character = getchar();

if(isalpha(character) > 0)
    printf("The character is a letter.");
else if(isdigit(character) > 0)
    printf("The character is a digit.");
else
    printf("The character is not alphanumeric.");

}
