/*
Program Name: Function Returning structure
Author: Abdullah Almasud
*/
#include<stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    float salary;
};
struct employee getData();
int main()
{
    struct employee emp;
    emp = getData();
    printf("\n\n           *** Employee Data ***\n\n");
    printf("Id: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
struct employee getData()
{
    struct employee e1;
    printf("Enter employee Id: \n");
    scanf("%d", &e1.emp_id);
    fflush(stdin);
    printf("Enter employee Name: \n");
    scanf("%[^\n]s", e1.name);
    printf("Enter employee Salary: \n");
    scanf("%f", &e1.salary);

    return (e1);
}

