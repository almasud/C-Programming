/*
Program Name : Use of a cast or explicit type conversion.
Author Name : Abdullah Almasud.
*/
main (){
    float sum; /* Declare the variable */
    int n;
    sum = 0; /* Assign the variable */

    for (n=1;n<=10;++n){

       sum = sum + 1/(float)n; /* Use cast or explicit type conversion. */
       printf("%2d %6.4f\n",n,sum);
    }

}
