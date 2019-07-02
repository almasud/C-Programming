/*
Topic: 113.File Management(Open, create and close)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp;
    fp = fopen("files/text.txt", "w");
    fprintf(fp ,"This is a text file.\n");
    printf("file is successfully created.\n");
    fclose(fp);

    return 0;
}
