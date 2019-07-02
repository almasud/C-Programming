/*
Program: Nested structure and something interesting!
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct createAccount{

    char firstName[20];
    char lastName[20];
    char userName[20];
    char password[20];
    struct birthday{
        int day;
        int month;
        int year;
    }birth;
    struct gender{
        int male;
        int female;
    }sex;

};

void pass_gen(char *pass){
    int i = 0;
    char ch;

    while(1){
        ch = getch();
        if(ch == 13)
            break;
        putch('*');
        pass[i++] = ch;
    }
    pass[i] = '\0';
}

int main(){

    struct createAccount user;
    char passChk[20], sexChk[10];

    printf("***** Input *****\n\n");
    printf("Enter first name: ");
    scanf("%s", user.firstName);
    printf("Enter last name: ");
    scanf("%s", user.lastName);
    printf("Enter user name: ");
    scanf("%s", user.userName);
    passInput:
    printf("Enter password: ");
    pass_gen(user.password);
    printf("\nRepeat password: ");
    pass_gen(passChk);
    if(strcmp(user.password, passChk) != 0){
        printf("\nYour password is mismatch!!!\nPleas Re-enter your password.\n");
        goto passInput;
    }
    printf("\nEnter birthday:-\n");
    printf("\tEnter day: ");
    scanf("%d", &user.birth.day);
    printf("\tEnter month: ");
    scanf("%d", &user.birth.month);
    printf("\tEnter year: ");
    scanf("%d", &user.birth.year);
    sexInput:
    printf("Enter your sex: (If male press m or if female press f): ");
    scanf("%s", sexChk);
    if(strcmp(sexChk, "f") == 0 || strcmp(sexChk, "F") == 0){
        user.sex.female = 1;
        user.sex.male = 0;
    }else if(strcmp(sexChk, "m") == 0 || strcmp(sexChk, "M") == 0){
        user.sex.female = 0;
        user.sex.male = 1;
    }else{
        printf("You have pressed wrong key!!!\nPlease enter correct key.\n");
        goto sexInput;
    }

    printf("\n***** Output *****\n\n");
    printf("First Name: %s\n", user.firstName);
    printf("Last Name: %s\n", user.lastName);
    printf("User Name: %s\n", user.userName);
    printf("Password: %s\n", user.password);
    printf("Birth Day: %d/%d/%d\n", user.birth.day, user.birth.month, user.birth.year);
    printf("Your Sex is: ");
    if(user.sex.female == 1)
        printf("Female\n");
    if(user.sex.male == 1)
        printf("Male\n");


    return 0;
}
