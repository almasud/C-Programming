/*
Program Name : Example-4.9: formated_output_of_integers
Author Name : Abdullah Almasud.
*/

main (){

    int m = 12345; // Declaration and assign of variables.
    long n = 987654;

    printf("%d\n",m); // Output the value in default (where w = 1).
    printf("%10d\n",m); // Output the value in fixed wide (where w = 10).
/* Output the value in fixed wide (where w = 10) and set Zero (0) flag. */
    printf("%010d\n",m);
/* Output the value in fixed wide (where w = 10) and set minus (-) flag. */
    printf("%-10d\n",m);
    printf("%101d\n",n); // Output the value in fixed wide (where w = 101).
/* Output the negative value and fixed wide (where w = 101). */
    printf("%101d\n",-n);

}
