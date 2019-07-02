/*
Topic: 103.Structure (Self reference) It is useful for working
with linked list.
Author: Abdullah Almasud
*/
#include<stdio.h>

struct self_ref{
    int a;
    struct self_ref *next;
};

void printAll(struct self_ref var){

    if(var.a == 0)
        return;
    printf("%d ", var.a);
    /*Passing next variable reference and assign to var*/
    printAll(*var.next);
    //printf("%d ", var.a); //It's produce reverse result
}

int main(){

    struct self_ref var1, var2, var3, var4;
    var1.a = 3;
    var1.next = &var2;
    var2.a = 6;
    var2.next = &var3;
    var3.a = 9;
    var3.next = &var4;
    var4.a = 0;
    /*Assign var1 to var structure in function printAll()*/
    printAll(var1);

    return 0;
}
