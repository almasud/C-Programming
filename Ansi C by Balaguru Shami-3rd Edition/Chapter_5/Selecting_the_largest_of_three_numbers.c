/*
Program Name : Selecting the largest of three numbers.

Author Name : Abdullah Almasud.
*/

main()
{
    float a, b, c;

    printf("Enter three values: \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("\nLargest value is: ");

    if(a > b)
    {
        if(a > c)
        {
            printf("%f",a);
        }
        else
        {
            printf("%f",c);
        }
    }
    else
    {
        if(b > c)
        {
            printf("%f",b);
        }
        else
        {
            printf("%f",c);
        }
    }
}
