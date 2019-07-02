/*
Program Name : Example-4.10: formated_output_of_real_number
Author Name : Abdullah Almasud.
*/

main (){

    float y = 98.7654; // Declaration and assign of variables.

/*
Output the value in fixed wide before and after decimal point
(where minimum w = 7 and .p = 4).
*/
    printf("%7.4f\n",y);

/* Output the value in default (where minimum w = 1 and it's > w for print full
and .p = 000000). */

    printf("%f\n",y);
/*
Output the value in fixed wide before and after decimal point
(where w = 7 and .p = 4) and it's also act in right-justified.
*/
    printf("%7.2f\n",y);
/*
Output the value in fixed wide before and after decimal point
(where w = 7 and .p = 2) and it's also act in right-justified and
set minus (-) flag for acting in left-justified.
*/
    printf("%-7.2f\n",y);
/*
Output the value in fixed wide before and after decimal point
(where w = 7 and .p = 2) and it's also act in right-justified and
set zero (0) flag for adding zero in left blank side.
*/
    printf("%07.2f\n",y);
/*
Output the value in fixed wide before and after decimal point
(where w = 7 and .p = 2) and it's also act in right-justified and
it's supply the value of w and .p in run time.
*/
    printf("%*.*f\n",7,2,y);

/* For new line. */
    printf("\n");

/*
Output the value in fixed wide before and after decimal point
(where w = 7 and .p = 2) and it's show in exponential notation and
also act in right-justified and.
*/
    printf("%10.2e\n",y);
/*
Output the negative value in fixed wide before and after decimal point
(where w = 12 and .p = 4) and it's show in exponential notation and
also act in right-justified and.
*/
    printf("%12.4e\n",-y);
/*
Output the value in fixed wide before and after decimal point
(where w = 10 and .p = 2) and it's show in exponential notation and
also act in left-justified for adding minus (-) flag.
*/
    printf("%-10.2e\n",y);
/*
Output the value in default wide (where minimum w = 1 and it's > w for print full and .p = 000000) and
it's show in exponential notation and
also act in right-justified.
*/
    printf("%e\n",y);
}
