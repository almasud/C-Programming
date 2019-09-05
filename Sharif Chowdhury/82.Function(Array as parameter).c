/*
Program Name: 81.Function(Array as parameter)
Author: Abdullah Almasud
*/
#include<stdio.h>

void abc(int a[][5]){
    printf("Before change in abc() function a[4][3] = %d\n", a[4][3]);
    a[4][3] = 100;
    printf("After change in abc() function a[4][3] = %d\n", a[4][3]);
}
int main(){

    int arr[10][5];
    arr[4][3] = 5;
    printf("Before change in main() function arr[4][3] = %d\n", arr[4][3]);
    abc(arr);
    printf("After change in main() function arr[4][3] = %d\n", arr[4][3]);

    return 0;
}
