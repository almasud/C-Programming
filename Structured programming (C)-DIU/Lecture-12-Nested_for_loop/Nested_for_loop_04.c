/*
Program Name : Lecture-12:- Nested for loop example-04.

Author Name : Abdullah Almasud.
*/

main()
{
    int i, j, n;

    printf("Please enter the value of \n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n-1; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
