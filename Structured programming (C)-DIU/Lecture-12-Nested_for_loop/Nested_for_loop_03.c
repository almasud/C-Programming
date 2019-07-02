/*
Program Name : Lecture-12:- Nested for loop example-03.

Author Name : Abdullah Almasud.
*/

main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
