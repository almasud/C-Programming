/*
Program Name:Illustration Of Integer Arithmetic
Author Name:Abdullah Almasud.
*/
main (){

/* Variable Declaration */
int month,days;
/*Get a number*/
printf("Enter Days\n");
scanf("%d",&days);
/*Now calculate the days and assign the value*/
month = days/30;
days %=30;
/*Now print the results*/
printf("Month = %d and Days = %d",month,days);

}
