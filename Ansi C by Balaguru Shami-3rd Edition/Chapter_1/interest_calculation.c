/*
Program name : Sample program 3: Interest calculation
Author name : Abdullah Almasud

*/
/* Investment program */
#define PERIOD 10
#define PRINCIPLE  5000.00
/* Main program begins */
main (){

    /* Declaration statements */
    int year;
    float amount,value,inrate;
    /* Assignment statements */
    amount = PRINCIPLE;
    inrate = 0.11;
    year = 0;
    /* Calculation statements */
    /* Computation using while loop */
    while (year <= PERIOD){

        printf("%2d        %8.2f\n",year,amount);
        value = amount+inrate*amount;
        year = year+1;
        amount = value;

    }
    /* While loops ends*/
}
/* Program ends*/
