/*
Program Name: Example:5.7-Use of the goto statement.(Output Problem)
Author: Abdullah Almasud.
*/
#include<math.h>

main()
{
    double x, y;
    int count;

    count = 1;

    printf("Enter five real value in a Line:\n");

    read:
        scanf("%ld", &x);
        printf("\n");

        if(x < 0)
        {
            printf("Value -%d is negative\n",count);

        }
        else
        {
            y = sqrt(x);

            printf("%lf\t %lf\n", x, y);
        }
        count = count + 1;
        if(count <= 5)

            goto read;

        printf("\n End of computation.");

}
