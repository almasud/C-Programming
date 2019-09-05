/*
Topic: 115.File Management(PS 11 Copy text from one file to another).
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp, *fp1, *fp2;
    char *ch = (char *)malloc(100 * sizeof(char));

    fp = fopen("files/text1.txt", "w");
    scanf("%[^\n]s", ch);
    fprintf(fp, "%s", ch);
    fclose(fp);

    fp1 = fopen("files/text1.txt", "r");
    if(fp1 == NULL){
        printf("File not found!");
        return 0;
    }else{
        fp2 = fopen("files/text2.txt", "w");

        while(fscanf(fp1, "%s", ch) != EOF)
            fprintf(fp2, "%s ", ch);

        fclose(fp1);
        fclose(fp2);
    }

    free(ch);

    return 0;
}
