/*
Program Name: Find the minimum number of 10 elements version 2.
Author: Abdullah Almasud.
*/
#include<stdio.h>
#define SIZE 10

main()
{
    int a[SIZE], i, min;

    printf("Enter 10 values.\n");

    for(i=0; i<SIZE; i++)

        scanf("%d",&a[i]);

    min = a[0];

    for(i=1; i<SIZE; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nMinimum value is: %d", min);



}
