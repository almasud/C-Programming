/*
Program name : Average of N numbers.
Author name : Abdullah Almasud.
*/

#define N 10 // Symbolic Constant.

main(){
    int count; // Declaration of variables.
    float sum,average,number;
    sum = 0; // Initialization of variables.
    count = 0;

    while (count < N){

        printf("Please input the number\n");
        scanf("%f",&number);
        sum = sum + number;
        count = count + 1;
    }
    average = sum/N;
    printf("N = %d sum = %f ",N,sum);
    printf("Average = %f",average);
}
