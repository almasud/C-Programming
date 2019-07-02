/*
Program Name: Create structure array
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

struct student{
    char sName[20];
    int sId;
    float sCgpa;
};

int main(){

    struct student s[10];
    int i, n;
    n = 3;
    printf("Enter student name ID and CGPA respectively in %i times\n", n);
    for(i=0; i<n; i++){
        printf("Case#%i: ", i+1);
        scanf("%s %i %f", s[i].sName, &s[i].sId, &s[i].sCgpa);
    }

    print(s);

    return 0;
}

void print(struct student *st){
    int i, n;
    n = 3;

    for(i=0; i<n; i++){
        printf("\nStudent name is: %s\n", st[i].sName);
        printf("Student ID is: %i\n", st[i].sId);
        printf("Student CGPA is: %.2f\n", st[i].sCgpa);
    }
}
