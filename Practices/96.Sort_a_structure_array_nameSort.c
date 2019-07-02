/*
Problem: Sort a structure array(name sort).
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int sId;
    double sCgpa;
};

void input(struct student *s){

    printf("Input ID, Name and CGPA respectively(Use blank space between inputs)\n");
    int i;
    for(i=0; i<3; i++)
        scanf("%d%s%lf", &s[i].sId, s[i].name, &s[i].sCgpa);

}

void nameSort(struct student *s){

    int i, j;
    for(i=0; i<2; i++){
        for(j=i+1; j<3; j++){
            if(strcmp(s[i].name, s[j].name) > 0){

                struct student temp;

                strcpy(temp.name, s[i].name);
                temp.sId = s[i].sId;
                temp.sCgpa = s[i].sCgpa;

                strcpy(s[i].name, s[j].name);
                s[i].sId = s[j].sId;
                s[i].sCgpa = s[j].sCgpa;

                strcpy(s[j].name, temp.name);
                s[j].sId = temp.sId;
                s[j].sCgpa = temp.sCgpa;

            }
        }
    }
}

void output(struct student *s){

    int i;
    printf("\n***** Output *****\n");
    for(i=0; i<3; i++)
        printf("%d %s %.2lf\n", s[i].sId, s[i].name, s[i].sCgpa);

}

int main(){

    struct student s[3];
    input(s);
    nameSort(s);
    output(s);

    return 0;
}
