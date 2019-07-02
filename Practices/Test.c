/*
Problem:
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

int main(){
    int i = 0;
    char ch, str[100];

    while(1){
        ch = getch();
        if(ch == 13)
            break;
        putch(ch);
        str[i++] = ch;
    }
    str[i] = '\0';
    printf("\n%d", strlen(str));
    printf("\n%d", sizeof(str));

    printf("\n%s", str);

    /*if(strlen(str) == sizeof(str)){
            printf("Memory full!");
            break;
        }*/

    return 0;
}
