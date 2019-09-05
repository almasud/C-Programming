/*
Topic: 116.File Management(EOF)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fck, *fac;
    int a, b;
    fck = fopen("files/output.txt", "r");
    fac = fopen("files/acOutput.txt", "r");

    while(fscanf(fck, "%d", &a) !=EOF){
        fscanf(fac, "%d", &b);
        if(a != b){
            printf("Wrong Answer!\n");
            return 0;
        }
    }

    printf("Answer Accepted\n");

    fclose(fck);
    fclose(fac);

    return 0;
}
