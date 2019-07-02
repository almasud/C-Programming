/*
Program Name: Pointer Closer look 2
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int i, *pi = &i;
    char c, *pc = &c;
    float f, *pf = &f;
    double d, *pd = &d;

    printf("This machine allocate memory for: \n");
    printf("char = %d byte\nint = %d bytes\nfloat = %d bytes\ndouble = %d bytes\n\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
    printf("char = %d, int = %d, float = %d, double = %d\n", pc, pi, pf, pd); // We can use %p for actual address.
    pi++, pc++, pf++, pd++;
    printf("After Increment\n");
    printf("char = %d, int = %d, float = %d, double = %d\n", pc, pi, pf, pd);
    printf("\n\n\n");
    /* Careful for using parentheses */
    int x = 5, *px = &x;

    printf("%d %d %d\n", x, *px, px);
    /* when we can increment the value then we use */
    (*px)++;
    printf("%d %d %d\n", x, *px, px);
    /* But when we can increment the address then we use */
    *px++; /* Since increment address is not assign any value so it's assign a garbage value*/
    printf("%d %d %d\n", x, *px, px);

    return 0;
}
