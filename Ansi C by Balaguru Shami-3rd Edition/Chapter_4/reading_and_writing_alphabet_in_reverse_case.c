/*
Program Name : Reading And Writing Alphabet In Reverse Case.
Author Name : Abdullah Almasud.
*/
#include<stdio.h>
#include<ctype.h> /* Use ctype header file to use character function */

main (){
    char alphabet;

    printf("Enter an alphabet.");
    putchar('\n'); /* Move to next line. */

    alphabet = getchar();

    if(islower(alphabet)) /* Check condition. */
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
}
