/*
Program Name: Practice-03.Recursive function (find sum of factorial value)
Author: Abdullah Almasud
*/
#include<stdio.h>

/*
Test input 4  output = 10
*/

long long unsigned sumFact(int);

int main(){

    int n;

    printf("Enter an integer number of sum of factorial: ");
    scanf("%d", &n);
    printf("The sum of the factorial is: %llu", sumFact(n));


    return 0;
}

long long unsigned sumFact(int n){
    int sum = 0;

    if(n == 1)
        return 1;
    else{

        return  n+sumFact(n-1);
    }

}
