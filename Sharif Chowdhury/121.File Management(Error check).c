/*
Topic: 121.File Management(Error check)
Author: Abdullah Almasud
*/
/* perror(char*), feof(FILE*), ferror(FILE*), clearerr(FILE*) */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    fp = fopen("files/error_check.txt", "r");
    /*
    //If pointer not point any file or if we try to read and no file are created.
    if(!fp)
        perror("Error");
    */
    //If file is created and read mode
    getc(fp);
    //If file is blank or end in read mode
    if(feof(fp))
        printf("End of file!\n");

    //If try to read operation in write mode or try to write operation in read mode
    if(ferror(fp))
        printf("Error found!\n");

    //Reset ferror
    clearerr(fp);

    if(ferror(fp))
        printf("Error found!\n");

    fclose(fp);

    return 0;
}
