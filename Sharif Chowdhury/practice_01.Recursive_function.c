/*
Program Name: Practice-01.Recursive function(Addition two number and carry)
Author: Abdullah Almasud
*/
#include<stdio.h>

/*
Test input a=157, b=781, c=0 output 938
Test input a=555, b=555, c=0 output 0111
*/
void add(int a, int b, int c){

    /*This recursion function output reverse for print last digit in first*/
    /*
    int x, y, sum;

    if(a+b+c !=0){

        x = a % 10;
        y = b % 10;
        sum = x + y + c;
        printf("%d", sum%10);
        add(a/10, b/10, sum/10);
    }
    */
    /* Using loop */
    /*
    int arr[5], i = 0, x, y;

    while(a+b+c !=0){

        x = a % 10;
        y = b % 10;
        arr[i] = (x + y + c) % 10;
        c = (x + y + c) / 10;
        a /= 10;
        b /= 10;
        i++;
    }
    while(i != 0){
        printf("%d", arr[i-1]);
        i--;
    }
    */
    /*Using recursion function (This function wonderfully work our brain during calculating sum of two numbers)*/
    int x, y, sum;

    if(a+b+c !=0){

        x = a % 10;
        y = b % 10;
        sum = x + y + c;
        add(a/10, b/10, sum/10);
        printf("%d", sum%10);
    }
}

int main(){

    int a, b, c;
    printf("Enter three integer number for add (last number is carry): ");
    scanf("%d %d %d", &a, &b, &c);
    add(a, b, c);

    return 0;
}
