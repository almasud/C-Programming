/*
Program Name : Round off errors in floating point calculations.
Author Name : Abdullah Almasud.
*/

main () {

    /* Sum of n terms of 1/n */
    float sum,n,term; /* Declare of variable */
    int count = 1; /* Declare and assign of count variable */

    sum = 0; /* Assign of sum variable */

    /* Now we show a message and get a value in input */
    printf("Please enter the value of n:\n");
    scanf("%f",&n);
    /* the value of n is assign in term as 1/n */
    term = 1.0/n;
    /* Now we loop our output based in the value of n */
    while (count<=n){

        sum = sum + term;
        count++;
    }

    printf("Sum = %f\n",sum);

}
