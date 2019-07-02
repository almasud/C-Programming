/*
Program Name : Case study - Program of sales's man salary.
Author Name : Abdullah Almasud.
*/
#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02
main (){
    int quantity; /* Declaration of variables. */
    float gross_salary,price,bonus,commission;

    printf("Input Number Sold And Price\n"); /* Print the message of Input. */
    scanf("%d %f",&quantity,&price); /* Input the variables. */

    bonus = BONUS_RATE * quantity; /* Assign the variables. */
    commission = COMMISSION * quantity * price;
    gross_salary = BASE_SALARY + bonus + commission;

    printf("\n"); /* Print the output. */
    printf("Bonus        = %6.2f\n",bonus);
    printf("Commission   = %6.2f\n",commission);
    printf("Gross salary = %6.2f\n",gross_salary);
}
