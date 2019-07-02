/*
Topic: 114.File Management(Read, Write and Append Mode)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *fp;
    char *c;
    int sLen = 0;
    /* Allocate a memory space */
    c = (char *)malloc(100 * sizeof(char));
    //c = (char *)calloc(100, sizeof(char));
    /* Open a file in append mode */
    fp = fopen("files/newFile.txt", "a");
    scanf("%[^\n]s", c);
    fprintf(fp, "%s ", c);
    fclose(fp);
    /* Open a file in read mode */
    fp = fopen("files/newFile.txt", "r");
    printf("\n***** Output *****\n\n");
    while(fscanf(fp, "%s", c) != EOF){
        printf("%s ", c);
        sLen += strlen(c)+1;
    }
    printf("\n\nString length is: %d\n", sLen);
    fclose(fp);
    /* free the allocate memory */
    free(c);

    return 0;
}
