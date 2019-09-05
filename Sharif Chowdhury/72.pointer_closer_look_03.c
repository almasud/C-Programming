/*
Program Name: Pointer Closer look 3
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){
    int x, y, *p, *q;
    p = &x;
    x = 5;
    q = &(*p); /* we can use *(&x) instead of *p */

    printf("%d\n", *q);
    *p = 6;
    printf("%d\n", *q);
    *q = 6;
    printf("%d\n", *p);

    /* Let's pointer concept in an array */

    int arr[100];
    /*
    Since array allocate the memory in contiguous so, every array
    pointed their first value only and increment their address
    step by step.Lets consider, Here
    arr is pointed the address of &arr[0] thats mean arr == &arr[0].
    For this reason we can't use &operator of an array in scanf()
    function (ex: scanf("%d", arr[0])).
    */
    printf("\n%d, %d\n", arr, &arr[0]);
    /* Let's consider more example */
    int *a;
    a = arr;
    scanf("%d", &arr[0]);
    printf("%d", *a); /*Now it's print the value of &arr[0].So, arr == &arr[0] */

    return 0;
}
