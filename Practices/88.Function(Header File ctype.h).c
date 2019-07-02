/*
Problem: Header file (ctype.h -> isprint(), ispunct(), isspace(), iscntrl(), isalnum(), isalpha(), isdigit(), islower(), isupper(), toascii(), toupper(), tolower())
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<ctype.h>

void printData(char, char [], int);

int main(){

    char ch;
    ch = getchar();
    char str[100];

    if(isprint(ch)){
        printData(ch, " Yes! This is printable", 0);
        if(ispunct(ch))
            printData(' ' ,"and punctuation character and ASCII code is: ", toascii(ch));
        else if(isalnum(ch)){
            if(isalpha(ch))
                printData(' ' ,"and this is an Alphabet and ASCII code is: ", toascii(ch));
            else if(isdigit(ch))
                printData(' ' ,"and this is a digit and ASCII code is: ", toascii(ch));
        }else if(isspace(ch))
            printData(' ' ," and this is a space and ASCII code is: ", toascii(ch));

    }else{
        printData(' ' ,"This is not printable!", 0);
    }

    return 0;

}

void printData(char ch, char str[], int asc){

    if(islower(ch)){
        ch = toupper(ch);
    }else{
        ch = tolower(ch);
    }

    printf("%c", ch);
    printf(str);
    if(asc != 0)
    printf("%d", asc);

    return;
}
