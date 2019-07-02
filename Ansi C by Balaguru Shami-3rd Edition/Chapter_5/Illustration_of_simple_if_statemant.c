/*
Program Name :Example-5.1:- Illustration of simple if statement.

Author Name : Abdullah Almasud.
*/

main(){

    int a, b, c, d;
    float ratio;

    printf("Enter four integer values: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    /* Execute statement block. */
    if((c-d != 0))
        {
            /* Use type casting. */
            ratio = (float)(a+b)/(float)(c-d);
            printf("Ratio = %f\n", ratio);
        }

}
