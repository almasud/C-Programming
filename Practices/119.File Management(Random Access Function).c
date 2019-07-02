/*
Topic: 119.File Management(Random Access Function)
Author: Abdullah Almasud
*/
/*
fseek(FILE *fp, right or left position, start position);

*** First parameter -> This is file pointer.

*** Second parameter -> Positive value indicate right side and negative left side movement of pointer.

*** Third parameter -> 0 Indicate start position, 1 Indicate current position and 2 Indicate last position.

*/
#include<stdio.h>
#include<stdlib.h>


int main(){
    FILE *fp;
    char str[100];
    fp = fopen("files/fseek.txt", "w");
    fprintf(fp, "Abdullah Almasud");
    fclose(fp);

    fp = fopen("files/fseek.txt", "r");
    //Start from left and move (LTR) the cursor after 0 Position.
    fseek(fp, 0, 0);
    //fscnaf() function change the cursor position in last.
    fscanf(fp, "%[^\n]s", str);
    printf("%s\n", str);

    fp = fopen("files/fseek.txt", "r");
    //Start from left and move (LTR) the cursor after 9 Position.
    fseek(fp, 9, 0);
    //Start from Current (9) position (LTR) and move (LTR) the cursor after 2 Position.
    fseek(fp, 2, 1);
    //fscnaf() function change the cursor position in last.
    fscanf(fp, "%[^\n]s", str);
    printf("%s\n", str);


    //Start from last(RTL) position and move (RTL) the cursor after -7 Position.
    fseek(fp, -7, 2);
    //fscnaf() function change the cursor position in last.
    fscanf(fp, "%[^\n]s", str);
    printf("%s\n", str);


    fclose(fp);

    return 0;
}
