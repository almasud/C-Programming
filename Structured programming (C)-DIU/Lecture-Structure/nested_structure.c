/*
Program Name: Structure within structure (Nested structure)
Author: Abdullah Almasud
*/
#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
    int age;
    struct date
    {
        int day, month, year;

    }join;
    char address[50];

};
int main()
{
    struct employee e[6];
    int i, n;
    printf("Enter the number of employee to insert values: ");
    scanf("%d", &n);

    /* Set value */
    for(i=0; i<n; i++)
    {
        printf("\nEnter ID of the employee %d: ", i);
        scanf("%d", &e[i].id);
        printf("\nEnter Name of the employee %d: ", i);
        fflush(stdin);
        gets(e[i].name);
        printf("\nEnter Salary of the employee %d: ", i);
        scanf("%f", &e[i].salary);
        printf("\nEnter Age of the employee %d: ", i);
        scanf("%d", &e[i].age);
        printf("\nEnter Join date (dd mm yy) of the employee %d: ", i);
        scanf("%d", &e[i].join.day);
        scanf("%d", &e[i].join.month);
        scanf("%d", &e[i].join.year);
        printf("\nEnter Address of the employee %d: ", i);
        fflush(stdin);
        gets(e[i].address);
    }
    /* Get value */
    for(i=0; i<n; i++)
    {
        printf("\n\n        *** The value of the employee %d ***\n", i);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Age: %d\n", e[i].age);
        printf("Join Date (dd mm yy): %d/%d/%d\n", e[i].join.day, e[i].join.month, e[i].join.year);
        printf("Address: %s\n", e[i].address);

    }


    return 0;
}

