/*
Topic: 111.Dynamic memory allocation(self reference structure)
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<stdlib.h>

struct myStructure{

    int a;
    struct myStructure *next;
};

void print(struct myStructure *ptr){
    if(ptr == NULL){
        printf("NULL\n");
        return;
    }
    printf("%d\n", ptr->a);
    print(ptr->next);
    //printf("%d\n", ptr->a); //For reverse output
    /*
    while(1){
        if(ptr == NULL){
            printf("NULL\n");
            break;
        }
        printf("%d\n", ptr->a);
        ptr = ptr->next;
    }
    */
}

int main(){
    /*
    struct myStructure a, b, c, d, e;
    a.a = 5;
    a.next = &b;
    b.a = 10;
    b.next = NULL;
    print(&a);
    */
    struct myStructure *obj_start, *obj_end, *obj;
    int n = 5, x;
    obj_start = NULL;
    obj_end = NULL;
    obj = NULL;
    printf("Input %d integer number: ", n);

    while(n--){
        if((obj_start == obj_end) && (obj_start == NULL)){

            obj = (struct myStructure *)malloc(sizeof(struct myStructure));
            scanf("%d", &x);
            obj->a = x;
            obj->next = NULL;

            obj_start = obj_end = obj;
        }else{

            obj = (struct myStructure *)malloc(sizeof(struct myStructure));
            scanf("%d", &x);
            obj->a = x;
            obj->next = NULL;

            obj_end->next = obj;
            obj_end = obj;
        }

    }
    printf("\n***** Output *****\n");
    print(obj_start);


    return 0;
}
