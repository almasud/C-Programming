/*
Program Name: Find average marks obtained by a class of 30 student in a test.
Author: Abdullah Almasud.
*/
#include<stdio.h>

main()
{
    int avg, sum = 0;
    int i;
    int marks[30]; /* Array declaration. */

    printf("Enter 30 students marks.\n");
    for(i= 0; i<30; i++)
        scanf("%d", &marks[i]); /* Store data in array. */
    for(i= 0; i<=29; i++)
    {
        sum = sum + marks[i]; /* Read data from array. */
    }
    avg = sum/30;
    printf("\nAverage mark is: %d", avg);
}
