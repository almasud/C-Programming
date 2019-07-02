/*
Program Name: Formatted Output
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    /* Formatted output integer */
    printf("%5d %05d %-5d %3d\n", 123, 123, 123, 123456);

    /* Formatted output float */
    printf("\n%10.2f\n", 15.2345);
    /* This is equivalent of above */
    printf("%*.*f\n", 10, 2, 15.2345); /* Here we can control this formate by variable */


    return 0;
}
