/*
Topic: 124.Preprocessor(All in one)
Author: Abdullah Almasud
*/
// #if #else #elif #endif
// #ifdef #ifndef #undef
// ##
#include<stdio.h>
#define PI 3.1416
#define same(x, y) x##y

int main(){

    int xy = 5;

    #if 5 > 3
    printf(">\n");
    #elif 5 == 5
    printf("==\n");
    #else
    printf("<\n");
    #endif // 5

    #ifdef PI
    printf("The value of PI is: %f\n", PI);
    #undef PI
    #endif // PI
    #ifndef PI
    float PI = 3.14159;
    printf("The new value of PI is: %f\n", PI);
    #endif

    printf("%d\n", same(x, y));

    return 0;
}
