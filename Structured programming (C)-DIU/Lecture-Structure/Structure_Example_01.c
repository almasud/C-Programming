/*
Program Name: Structure example 01
Author: Abdullah Almasud
*/
#include<stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    char address[50];
    int salary;
    int mobile;
};
void main()
{
    struct employee e1, e2;
    /*Get value for employee 1*/
    printf("Enter the id of employee 1: \n");
    scanf("%i", &e1.emp_id);
    printf("Enter the name of employee 1: \n");
    fflush(stdin);
    gets(e1.name);
    printf("Enter the address of employee 1: \n");
    gets(e1.address);
    printf("Enter the salary of employee 1: \n");
    scanf("%d", &e1.salary);
    printf("Enter the mobile number of employee 1: \n");
    scanf("%d", &e1.mobile);
    /*Get value for employee 2*/
    printf("Enter the id of employee 2: \n");
    scanf("%i", &e2.emp_id);
    printf("Enter the name of employee 2: \n");
    fflush(stdin);
    gets(e2.name);
    printf("Enter the address of employee 2: \n");
    gets(e2.address);
    printf("Enter the salary of employee 2: \n");
    scanf("%d", &e2.salary);
    printf("Enter the mobile number of employee 2: \n");
    scanf("%d", &e2.mobile);

    /*Output the value*/
    printf("Value of employee 1\n\n");
    printf("Id: %i\n", e1.emp_id);
    printf("Name: %s\n", e1.name);
    printf("Address: %s\n", e1.address);
    printf("Salary: %d\n", e1.salary);
    printf("Mobile: %d\n", e1.mobile);

    printf("Value of employee 2\n\n");
    printf("Id: %i\n", e2.emp_id);
    printf("Name: %s\n", e2.name);
    printf("Address: %s\n", e2.address);
    printf("Salary: %d\n", e2.salary);
    printf("Mobile: %d\n", e2.mobile);

}
