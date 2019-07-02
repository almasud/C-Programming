/*
Program Name: File operation in C (Program read/write using fprintf() and fscanf() ).
Author: Abdullah Almasud.
*/
#include<stdio.h>

int main()
{

    char name[20];
    int roll;
    float gpa;
    FILE *fp;

    printf("Enter Name, Roll and GPA one by one\n");
    scanf("%[^\n]s", name);
    scanf("%d", &roll);
    scanf("%f", &gpa);

    /* Use fprintf() to write */
    fp = fopen("out.txt", "w");
    fprintf(fp, "%s %d %.2f", name,roll,gpa);
    fclose(fp);

    /* Use fscanf() to read */
    fp = fopen("out.txt", "r");
    char str[50];
    while((fscanf(fp, "%[^\n]s", str)) != EOF)
    fclose(fp);
    printf("fprintf() and fscanf() Operation are Successful\n\nFile content is: %s\n", str);

    return 0;
}
