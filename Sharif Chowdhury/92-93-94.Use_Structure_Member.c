/*
Program Name: Use structure member.
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int id;
    double cgpa;
};

int main(){

    int i, n;
    n = 2;
    struct student s1, s2;

    strcpy(s1.name, "Abdullah Almasud");
    s1.id = 1;
    s1.cgpa = 3.50;

    strcpy(s2.name, "Shamima Sohale");
    s2.id = 2;
    s2.cgpa = 4.00;

    printf("Name of the student is: %s\n", s1.name);
    printf("ID of the student is: %i\n", s1.id);
    printf("CGPA of the student is: %.2lf\n", s1.cgpa);
    printf("\n");
    printf("Name of the student is: %s\n", s2.name);
    printf("ID of the student is: %i\n", s2.id);
    printf("CGPA of the student is: %.2lf\n", s2.cgpa);


    return 0;
}
