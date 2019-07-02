/*
Program Name : Reading a real number.
Author Name : Abdullah Almasud.
*/
main(){

float x,y; /* Declaration of variables.*/
double p,q;

printf("Values of x and y: "); /* Print a message for input. */
scanf("%f %e",&x,&y); /* Get input x and y. */
printf("x = %f\ny = %f\n\n",x,y); /* Print Output. */

printf("Values of p and q: ");/* Print a message for input. */
scanf("%lf %lf",&p,&q); /* Get input p and q. */
printf("\n\np = %.12lf\nq = %.12e",p,q); /* Print Output. */
}
