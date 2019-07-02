/*
Program Name: Break and continue
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

   int arr[100], i;
   /*Assign value from 1 to 100 in a array*/
   for(i=0; i<100; i++){
    arr[i] = i+1;
   }
   /*Now print value of arr array from 1 to 80 except even number*/
   for(i=0; i<100; i++){
        if(i%2 != 0)
            continue;
        if(i >= 80)
            break;

        printf("%d ", arr[i]);

    }

    return 0;
}


