/*
Program Name : Calculate the average grade use switch statement.

Author Name : Abdullah Almasud.
*/

main()
{
    int index;
    float marks;

    printf("Enter the marks: \n");
    scanf("%f",&marks);

    index = (int)marks/10;

    switch (index)
    {
        case 10:
        case 9:
        case 8:
            printf("\nYour grade is Honour.\n");
            break;
        case 7:
        case 6:
            printf("\nYour grade is First Division.\n");
            break;
        case 5:
            printf("\nYour grade is Second Division.\n");
            break;
        case 4:
            printf("\nYour grade is Third Division.\n");
            break;
        default:
            printf("\nYou are Fail.\n");
            break;
    }
}
