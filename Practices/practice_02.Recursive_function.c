
/*
Program Name: Practice-02.Recursive function (Print reverse number and their sum)
Author: Abdullah Almasud
*/
#include<stdio.h>

/*
Test input 15  output reverse = 51, sum = 6
*/
int printSum(int);
void reverse(int);

int main(){

    int n, remainder;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    printf("Reverse number is: ");
    reverse(n);
    printf("\n");
    printf("Sum is: %d", printSum(n));

    return 0;
}

int printSum(int n){
    static int sum = 0;
    int remainder;
    /*Using loop*/
    /*
    printf("Reverse number is: ");
    while(n > 0){

        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("\nSum of the number is: %d\n", sum);
    */
    if(n > 0){

        remainder = n % 10;
        printSum(n/10);

        return sum+=remainder;

    }

}

void reverse(int n){
    int sum, remainder;
    sum = 0;
    /*Using loop*/
    /*
    while(n > 0){

        remainder = n % 10;
        printf("%d", remainder);
        n /= 10;
    }
    */
    if(n > 0){

        remainder = n % 10;
        printf("%d", remainder);
        reverse(n/10);
    }
}

