/*
Program: Nested structure 2
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Birthday{
        int day;
        int month;
        int year;
};

 struct Gender{
        int male;
        int female;
};

struct Student{

    char firstName[20];
    char lastName[20];
    struct Birthday birth;
    struct Gender sex;
};

struct Teacher{

    char firstName[20];
    char lastName[20];
    long long salary;
    struct Birthday birth;
    struct Gender sex;
};

int main(){

    struct Student s;
    struct Teacher t;
    char sexChk[10], teacherChk[10];

    printf("***** Input *****\n\n");
    TSCheck:
    printf("Who are you?: (If teacher press t or if student press s): ");
    scanf("%s", teacherChk);
    if(strcmp(teacherChk, "t") == 0 || strcmp(teacherChk, "T") == 0){

        printf("Enter first name: ");
        scanf("%s", t.firstName);
        printf("Enter last name: ");
        scanf("%s", t.lastName);
        printf("\nEnter birthday:-\n");
        printf("\tEnter day: ");
        scanf("%d", &t.birth.day);
        printf("\tEnter month: ");
        scanf("%d", &t.birth.month);
        printf("\tEnter year: ");
        scanf("%d", &t.birth.year);
        sexInputT:
        printf("Enter your sex: (If male press m or if female press f): ");
        scanf("%s", sexChk);
        if(strcmp(sexChk, "f") == 0 || strcmp(sexChk, "F") == 0){
            t.sex.female = 1;
            t.sex.male = 0;
        }else if(strcmp(sexChk, "m") == 0 || strcmp(sexChk, "M") == 0){
            t.sex.female = 0;
            t.sex.male = 1;
        }else{
            printf("You have pressed wrong key!!!\nPlease enter correct key.\n");
            goto sexInputT;
        }

        printf("Enter your Salary: ");
        scanf("%lld", &t.salary);

    }else if(strcmp(teacherChk, "s") == 0 || strcmp(teacherChk, "S") == 0){

        printf("Enter first name: ");
        scanf("%s", s.firstName);
        printf("Enter last name: ");
        scanf("%s", s.lastName);
        printf("\nEnter birthday:-\n");
        printf("\tEnter day: ");
        scanf("%d", &s.birth.day);
        printf("\tEnter month: ");
        scanf("%d", &s.birth.month);
        printf("\tEnter year: ");
        scanf("%d", &s.birth.year);
        sexInputS:
        printf("Enter your sex: (If male press m or if female press f): ");
        scanf("%s", sexChk);
        if(strcmp(sexChk, "f") == 0 || strcmp(sexChk, "F") == 0){
            s.sex.female = 1;
            s.sex.male = 0;
        }else if(strcmp(sexChk, "m") == 0 || strcmp(sexChk, "M") == 0){
            s.sex.female = 0;
            s.sex.male = 1;
        }else{
            printf("You have pressed wrong key!!!\nPlease enter correct key.\n");
            goto sexInputS;
        }

    }else{
        printf("You have pressed wrong key!!!\nPlease enter correct key.\n");
        goto TSCheck;
    }


    printf("\n***** Output *****\n\n");

    if(strcmp(teacherChk, "t") == 0 || strcmp(teacherChk, "T") == 0){
        printf("First Name: %s\n", t.firstName);
        printf("Last Name: %s\n", t.lastName);
        printf("Birth Day: %d/%d/%d\n", t.birth.day, t.birth.month, t.birth.year);
        printf("Your Sex is: ");
        if(t.sex.female == 1)
            printf("Female\n");
        if(t.sex.male == 1)
            printf("Male\n");
        printf("Your Salary is: %lld\n", t.salary);

    }else if(strcmp(teacherChk, "s") == 0 || strcmp(teacherChk, "S") == 0){
        printf("First Name: %s\n", s.firstName);
        printf("Last Name: %s\n", s.lastName);
        printf("Birth Day: %d/%d/%d\n", s.birth.day, s.birth.month, s.birth.year);
        printf("Your Sex is: ");
        if(s.sex.female == 1)
            printf("Female\n");
        if(s.sex.male == 1)
            printf("Male\n");
    }


    return 0;
}
