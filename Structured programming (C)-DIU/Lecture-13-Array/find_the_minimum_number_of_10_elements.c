/*
Program Name: Find the minimum number of 10 elements.
Author: Abdullah Almasud.
*/
#include<stdio.h>

main()
{
    int i, min, a[10];

    printf("Enter 10 numbers.\n");

    for(i=0; i<10; i++)

        scanf("%d", &a[i]);

    min = a[0];

    for(i=1; i<=10; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nThe minimum number is: %d", min);

}
