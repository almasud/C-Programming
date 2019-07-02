/*
Program Name (4.12): Program of inventory report.

Author Name : Abdullah Almasud.
*/

#define ITEM 4

main(){

    /* Begin Program */
    int i,quantity[5];
    float rate[5],value,total_value;
    char code[5][5];

    /* Reading values. */
    i = 1;

    while(i <= ITEM){

        printf("Enter code, quantity and rate: ");
        scanf("%s %d %f", code[i], &quantity[i], &rate[i]);
        i++;
    }
    /* Printing of Table and Column Heading. */
    printf("\n\n");
    printf("            Inventory Report            \n");
    printf("----------------------------------------\n");
    printf("        Code Quantity Rate Value        \n");
    printf("----------------------------------------\n");
    /*....Preparation of inventory position....*/
    total_value = 0;
    i = 1;

    while(i <= ITEM){

        value = quantity[i]*rate[i];

        printf("%5s %10d %10.2f %e\n", code[i], quantity[i], rate[i], value);

        total_value += value;
        i++;
    }

    /*....... Printing of End of Table........*/
    printf("----------------------------------------\n");
    printf("            Total Value = %e\n", total_value);
    printf("----------------------------------------\n");

    /* End Program */
}
