/*
Program Name: File operation in C (Program read/write for int value at a time using putw() and getw() ).
Author: Abdullah Almasud.
*/
#include<stdio.h>

int main()
{
    FILE *fp;
    int ch;
    /* Use putw() to write */
    fp = fopen("int.txt", "w");
    /* Putw() get value integer(ASCII code) as argument
    but write an ASCII character into the target file
    when we open the file manually we see the ASCII
    character.(ex: A)*/
    putw(65, fp);
    fclose(fp);
    /* Use getw() to read.It's return an integer value */
    fp = fopen("int.txt", "r");
    ch = getw(fp);
    fclose(fp);
    printf("putw() and getw() Operation are successful\n");
    printf("The value of int.txt file is: %d\n", ch);

    return 0;
}
