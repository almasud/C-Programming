/*
Topic: 122.Preprocessor(#define)
Author: Abdullah Almasud
*/
#include<stdio.h>
#define PI 3.1416
#define pf printf
#define pfi(a) printf("%d\n", a);
#define MAX(a, b) (a > b)? (a) : (b)
#define add(a, b) a + b

int main(){

    printf("%f\n", PI);
    pf("%.4f\n", PI);
    pfi(3)
    pfi(MAX(3, 5)); // pfi(printf("%d\n", (3 > 5)? (3) : (5))
    pfi(add(4, 4)/ 4); // 4+4/4


    return 0;
}
