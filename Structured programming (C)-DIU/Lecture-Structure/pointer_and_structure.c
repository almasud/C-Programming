/*
Program Name: Pointer and structure
Author: Abdullah Almasud
*/
#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee *emp, e1;
    emp = &e1;
    /* Set Data */
    printf("Enter Employee Id: \n");
    scanf("%d", &e1.id);
    fflush(stdin);
    printf("Enter Employee Name: \n");
    scanf("%[^\n]s", &e1.name);
    printf("Enter Employee Name: \n");
    scanf("%f", &e1.salary);
    /* Get Data */
    printf("\n\n            *** Employee Data ***\n\n");
    printf("Id: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);

    return 0;
}
