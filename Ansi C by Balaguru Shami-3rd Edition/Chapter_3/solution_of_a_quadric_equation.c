/*
Program Name : Case study - Solution of a quadratic equation.
Author Name : Abdullah Almasud.
*/
#include <math.h> /* Include <math.h> header for calculation math function */
main (){
    float a,b,c,discriminant,root1,root2; /* Declaration of variables. */

    printf("Enter the value of a , b and c\n"); /* Print the message for Input. */
    scanf("%f %f %f",&a,&b,&c); /*Input the values.*/

    discriminant = b*b - 4*a*c; /* Assigning the value to variables .*/
    if(discriminant < 0) /* Check the input. */

        printf("\n\n Roots Are Imaginary.\n"); /* Print the output. */
    else {

        root1 = (-b + sqrt(discriminant))/(2.0*a); /* Assigning values to variables. */
        root2 = (-b - sqrt(discriminant))/(2.0*a);

        printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n",root1,root2); /* Print the output. */
    }
}
