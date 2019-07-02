/*
Program Name: Switch statement
Author: Abdullah Almasud
*/
#include<stdio.h>

int main(){

    float marks;
    int result;

    printf("Enter your marks here out of 100: ");
    scanf("%f", &marks);

    result = (int)marks / 10;

    switch(result){
    case 10:
    case 9:
    case 8:

        printf("\nCongratulations! Your grade is A+\n");
        break;

    case 7:

        printf("\nIt' pretty good! Your grade is A\n");
        break;

    case 6:

        printf("\nNice! Your grade is A-\n");
        break;

    case 5:

        printf("\nHey you are successful! Your grade is B\n");
        break;

    case 4:

        printf("\nHey, you are passed! Your grade is C\n");
        break;

    case 3:
    case 2:
    case 1:

        printf("\nOpps! you got %.2f marks\n", marks);

    default:

        printf("You are failed.Try to next time.Best of luck!\n");

    }
    return 0;
}

