/*
Program Name: File operation in C (Program read/write using getc() and putc() ).
Author: Abdullah Almasud.
*/
#include<stdio.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("INPUT","w"); /* Open file for writing */
    while((c = getchar()) != EOF) /* get char form keyboard until CTR+Z */
        putc(c, fp); /* Write a character to INPUT */
    fclose(fp); /* close INPUT */

        fp = fopen("INPUT","r"); /* Reopen file for reading */
        while((c = getc(fp)) != EOF) /* Read character from file INPUT */
            printf("%c", c); /* Print character to screen */
        fclose(fp);

    return 0;
}
