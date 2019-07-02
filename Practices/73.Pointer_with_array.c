/*
Program Name: Pointer with array
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

int main(){

    int arr[10] = {2, 4, 1, 7, 4, 3, 9}, *p;
    p = arr; /* For only &arr[0] we can use arr because internally arr pointed of &arr[0] */
    printf("%d %d\n", *p, *(p+1));
    p = &arr[2];
    printf("%d %d\n", *p, *(p+1));
    p = arr;
    printf("%d\n", arr[5]);
    *(p+5) = 10; /* we assign array here by pointer instead of arr[5] = 10 */
    printf("%d\n", arr[5]);

    /* Let's consider here for more pointer concept with array */
    char str1[50] = "Dhaka International";
    char str2[50] = "University";
    char *s = strcpy(str1, str2+3);
    printf("\n%s %d %d\n", str1, str1, s);


    return 0;
}
