/*
Program Name: Sort 1D array (using bubble sort) and find it's median.
Author: Abdullah Almasud.
*/
#include<stdio.h>

main()
{
    int n;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);

    int x[n], i, j, temp;
    x[n] = temp = 0;

    printf("Enter %d numbers.\n", n);
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);

    /* Sorting number using bubble sort. */
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(x[i] > x[j])
            {
                /* Swapping. */
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("Ascending sorting of entered number is: ");
    for(i=0; i<n; i++)
    {
        if(i < n-2)
        {
            printf("%d ,", x[i]);
        }
        else if
            (i < n-1) printf("%d ",x[i]);
        else
        {
            printf("and %d.", x[i]);
        }
    }

    /* Find the middle number. */
    if(n%2 == 0)
    {
        printf("\nMiddle number is = %.2f", (x[n/2]+x[n/2-1])/2.0);
    }
    else
    {
        printf("\nMiddle number is = %d", x[n/2]);
    }

}
