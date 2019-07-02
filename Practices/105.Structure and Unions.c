/*
Topic: 105.Structure and Union.
Author: Abdullah Almasud
*/
#include<stdio.h>

/* A Union memory size depends on maximum data type's memory size
all type of variable of a union share same memory and therefor we
can work a single type value at a time.
*/

/*The size of the below structure is 24 bytes*/
struct myStructure{
    char c;
    int i;
    float f;
    double d;

};
/*The size of the below structure is 8 bytes*/
union myUnion{
    char c;
    int i;
    float f;
    double d;
};

int main(){

    printf("The size of myStructure is: %d and myUnion is: %d\n\n", sizeof(struct myStructure), sizeof(union myUnion));
    //struct myStructure us;
    union myUnion us;
    us.c = 'A';
    us.i = 5;
    us.f = 4.5;
    us.d = 5.565656;

    printf("%c\n", us.c);
    printf("%d\n", us.i);
    printf("%f\n", us.f);
    printf("%lf\n", us.d);

    return 0;
}
