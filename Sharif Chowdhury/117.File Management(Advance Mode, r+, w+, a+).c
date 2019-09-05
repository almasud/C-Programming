/*
Topic: 117.File Management(Advance mode, r+, w+, a+)
Author: Abdullah Almasud


w+ (write plus) -> Write newly in first mode and read second mode (remove previous data for write mode and if file not exist create a new file).

r+ (read plus) -> Read first mode and Write newly in second mode (remove previous data for write mode).

a+ (append plus) -> Write in first mode and read second mode (keep previous data if file not exist create a new file).

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fpw1, *fpw2, *fpr1, *fpr2, *fpa1, *fpa2;
    char wChar[100], rChar[100], aChar[100];
    printf("Advance file mode (r+, w+, a+)\n");
    //For w+
    fpw1 = fopen("files/write_plus.txt", "w+");
    fpw2 = fopen("files/write_plus.txt", "w+");

    fprintf(fpw1, "I am w+.\n");
    fclose(fpw1);

    fscanf(fpw2, "%[^\n]s", wChar);
    printf("\nWrite Plus Mode\n");
    printf("%s\n", wChar);
    fclose(fpw2);

    //For r+
    fpr1 = fopen("files/read_plus.txt", "r+");
    fpr2 = fopen("files/read_plus.txt", "r+");

    fscanf(fpr2, "%[^\n]s", rChar);
    printf("\nRead Plus Mode\n");
    if(fpr1 == NULL)
        printf("\" read_plus.txt \" File not found!\nSorry!!! I am unable to create a new file if not exists.\nPlease create this file first.");
    else if(strlen(rChar) == 0)
        printf("Please Re-build your program just once to read me.");
    printf("%s\n", rChar);
    fprintf(fpr1, "I am r+.\n");

    fclose(fpr1);
    fclose(fpr2);

    //For a+
    fpa1 = fopen("files/append_plus.txt", "a+");
    fpa2 = fopen("files/append_plus.txt", "a+");

    fprintf(fpa1, "I am a+.\n");
    fclose(fpa1);
    printf("\nAppend Plus Mode\n");
    while(fscanf(fpa2, "%s", aChar) !=EOF)
        printf("%s ", aChar);
    printf("\n");
    fclose(fpa2);

    return 0;
}

