/*
Topic: 120.File Management(File With Function)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char file_name[100];

void rename_file(char *new_name){
    strcpy(file_name, new_name);
    strcat(file_name, ".txt");
}

FILE *create_file(char *mode){
    FILE *fp;
    fp = fopen(file_name, mode);
    return fp;
}

void write_file(FILE *fp){
    fprintf(fp, "%s\n", file_name);
}

void readPrint_file(FILE *fp){
    char str[100];
    fscanf(fp, "%[^\n]s", str);
    printf("%s\n", str);
}

int main(){
    FILE *fp;
    rename_file("files/file_with_function");

    fp = create_file("w");
    write_file(fp);
    fclose(fp);

    fp = create_file("r");
    readPrint_file(fp);
    fclose(fp);


    return 0;
}
