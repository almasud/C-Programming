/*
Program Name : Reading integers using scanf
Author Name : Abdullah Almasud.
*/
main (){

int a,b,c,x,y,z; /* Declaration of variables. */
int p,q,r;

printf("Enter three integer numbers\n"); /* Printing a message . */
scanf("%d %*d %d",&a,&b,&c); /* Get three numbers using scanf */
printf("%d %d %d \n\n",a,b,c); /* Output three numbers. */

printf("Enter two 4-digit numbers\n"); /* Printing a message. */
scanf("%2d %4d",&x,&y); /* Get two 4-digit numbers. */
printf("%d %d \n\n",x,y); /* Output the numbers. */

printf("Enter two integers\n"); /* Printing a message. */
scanf("%d %d",&a,&x); /* Get two integers. */
printf("%d %d \n\n",a,x); /* Output the numbers. */

printf("Enter a nine digit number\n"); /* Printing a message. */
scanf("%3d %4d %3d",&p,&q,&r); /* Get a nine digit number. */
printf("%d %d %d \n\n",p,q,r); /* Output a nine digit number*/

printf("Enter two three digit numbers\n"); /* Print a message. */
scanf("%d %d",&x,&y); /* Get two three digit numbers. */
printf("%d %d",x,y); /* Output two three digit numbers. */

}
