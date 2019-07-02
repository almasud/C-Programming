/*
Program Name: 79.Function(Extern and Static variable)
Author: Abdullah Almasud
*/
#include<stdio.h>

int count();

int add(int a, int b){
    /*When call this function it's change the global value which
    exists anywhere in the program.
    */
    extern int c;
    c = a+b;

    return a+b;
}

int c;

int main(){

    printf("%d\n", c);
    add(5, 6);
    printf("%d\n", c);

    printf("%d\n", count());
    printf("%d\n", count());
    printf("%d\n", count());

    return 0;
}
/*Let's consider this function for static variable*/
int count(){
    /*We can find equivalent value by declaring n as a global*/
    static int n = 0;
    n++;

    return n;
}
