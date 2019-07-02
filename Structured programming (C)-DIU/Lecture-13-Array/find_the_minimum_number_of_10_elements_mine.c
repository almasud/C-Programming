/*
Program Name: Find the minimum number of 10 elements version 3 of mine (Define an array of
large size and use only the required number of elements.).
Author: Abdullah Almasud.
*/
#include<stdio.h>

main()
{
    /* At first declare of n. */
    int n = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    /* Second get the value of n in array a[n]. */
    int a[n], i, min;
    a[n] = i = min = 0;
    /* Get particular number. */
    printf("Enter %d number.\n", n);

    /* Check the first element weather it minimum and if yes then assign min. */
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    /* Check the minimum value from second element and assign it min.*/
    for(i=1; i<n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    printf("Minimum number is: %d", min);

}
