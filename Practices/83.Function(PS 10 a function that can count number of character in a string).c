/*
Program Name: 83.Function(PS 10 a function that can count number of character in a string)
Author: Abdullah Almasud
*/
#include<stdio.h>

/*We can use strlen() function by using #include<string.h> header file instead of this function*/

int strlen(char str[]){

    int count = 0, i;
    for(i=0; str[i]!='\0'; i++){

        count++;
    }

    return count;
}

int charcheck(char str[], char ch){

    int i, count = 0;

    for(i=0; i<strlen(str); i++){

        if(str[i] == ch){

            count++;
        }

    }

    return count;
}

int main(){

    char str[100], ch;

    /* We can use this scanf("%s %c\n", str, &ch); function instead of the function below */

    while(scanf("%s%*c%c%*c", str, &ch) != EOF){
        printf("Character number in your string is: %d\n", charcheck(str, ch));
    }


    return 0;
}
