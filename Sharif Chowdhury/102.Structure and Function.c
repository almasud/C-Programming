/*
Program: Structure and Function
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

struct Structure{
    int x;
    float y;
};
void print(struct Structure v){

    printf("x = %d\n", v.x);
    printf("y = %.2f\n", v.y);
}
struct Structure add(struct Structure a, struct Structure b){

    struct Structure result;
    /* We can add value same type always */
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    /*Return a new structure result*/
    return result;
}
int main(){

    struct Structure v1, v2, sum;
    v1.x = 5;
    v1.y = 8.5;

    /*If we can assign two structure then we can pass
    a value to a function*/
    printf("\tValue of v1\n");
    print(v1);
    v2 = v1;
    printf("\tValue of v2 after assign to v1\n");
    print(v2);
    /* Assign the value of result to sum structure */
    printf("\tValue of v1 and v2 after addition\n");
    sum = add(v1, v2);
    print(sum);

    return 0;
}
