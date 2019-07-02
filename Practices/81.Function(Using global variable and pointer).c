/*
Program Name: 81.Function(Using global variable and pointer)
Author: Abdullah Almasud
*/
#include<stdio.h>

/*Using global variable
int m, n, o, p;

void abc(int a, int b){

    m = a + b;
    n = a - b;
    o = a * b;
    p = a / b;
}

*/
/*Using pointer */
void abc(int a, int b, int *s, int *sb, int *m, int *d){

    *s = a + b;
    *sb = a - b;
    *m = a * b;
    *d = a / b;
}

int main(){

    int sum, sub, mul, div;
    int a = 6, b = 2;
    abc(a, b, &sum, &sub, &mul, &div);
    //sum = m, sub = n, mul = o, div = p;
    printf("%d %d %d %d\n", sum, sub, mul, div);

    return 0;
}
