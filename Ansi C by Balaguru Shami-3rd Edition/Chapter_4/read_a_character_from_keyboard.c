/*
Program name : Use of getchar () function to read a character form keyboard.
Author name : Abdullah Almasud.
*/
#include <stdio.h> /* use stdio.h header file to use standard input function getchar () */

main (){

    char answer;

    printf("Would you like to know my name?\nType Y for yes and N for no: ");
    answer = getchar(); /* Reading a character from keyboard */

    if(answer == 'Y' || answer == 'y') /* Check the input */

        printf("\nMy name is Abdullah Almasud.");

    else
        printf("\nYou are good for nothing!");

}
