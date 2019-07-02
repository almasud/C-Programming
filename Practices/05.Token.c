/*
Program Name: C Token
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    /* There are six type of C token
    1.Keywords ex: int, return etc.
    2.Identifiers ex: main, printf(), any variable name etc.
    3.Constant ex: 5, 6, 7 etc.
    4.String ex: "Abdullah", "Almasud" etc.
    5.Operators ex: +, -, * etc.
    6.Special symbols ex: {}, (), , , ; etc.
    */

    char name1[7] = {'A', 'l', 'm', 'a', 's', 'u', 'd'};
    int i;
    for(i=0; i<7; i++){

        printf("%c", name1[i]);

    }
/*String is actually an character array.The tow expression are equal in below*/
    char name2[] = {'A', 'l', 'm', 'a', 's', 'u', 'd', '\0'};
    printf("\n%s\n", name2);

    char name3[8] = "Almasud"; /*Last element assign with a null character (\0) to point end of string*/
    printf("%s\n", name3);

    return 0;
}
