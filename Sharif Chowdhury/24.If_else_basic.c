/*
Program Name: If else basic
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    int a, b;

    if(a=5){

        printf("All non-zero value is true!\n");
    }
    else{
        printf("It's false!!\n");
    }

    a = 1, b = 1;

    if(a == b){

        printf("a is equal to b\n");
    }
    else{
        printf("a is not equal to b\n");
    }

    if(a--){

        printf("a = %d\n", a);
    }


    return 0;
}

