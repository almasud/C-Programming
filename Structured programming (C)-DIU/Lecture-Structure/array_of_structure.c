/*
Program Name: Array of structure
Author: Abdullah Almasud
*/
#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
    int age;
    char address[50];

};
int main()
{
    struct employee e[5];
    int i, n;
    printf("Enter the number of employee to insert record: ");
    scanf("%d", &n);
    /* Set value */
    for(i=0; i<n; i++)
    {
        printf("Enter ID of the employee%d\n", i);
        scanf("%d", &e[i].id);
        printf("Enter Name of the employee%d\n", i);
        fflush(stdin);
        gets(e[i].name);
        printf("Enter Salary of the employee%d\n", i);
        scanf("%f", &e[i].salary);
        printf("Enter Age of the employee%d\n", i);
        scanf("%d", &e[i].age);
        printf("Enter Address of the employee%d\n", i);
        fflush(stdin);
        gets(e[i].address);
    }
    /* Get value */
    for(i=0; i<n; i++)
    {
        printf("\n\n         *** Value of the employee %d ***\n\n", i);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Age: %d\n", e[i].age);
        printf("Address: %s\n", e[i].address);

    }

    return 0;
}
