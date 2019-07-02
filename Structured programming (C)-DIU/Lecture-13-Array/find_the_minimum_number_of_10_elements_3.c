/*
Program Name: Find the minimum number of 10 elements version 3 (Define an array of
large size and use only the required number of elements.).
Author: Abdullah Almasud.
*/
#include<stdio.h>

main()
{
    int a[500], i, min, n;

    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    printf("\nEnter %d number.\n", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for(i=1; i<n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    printf("Minimum number is: %d", min);
}
