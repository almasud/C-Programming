/*
Program Name: 91.Structure and Union Starting
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

void idSort(long long*, int, char(*)[8], long long*);
void rollSort(long long*, int, char(*)[8], long long*);
void nameSort(char(*)[8], int, long long*, long long*);

int main(){
    long long n, i;
    printf("Enter Case number: ");
    scanf("%lld", &n);

    long long idArr[n], rollArr[n];
    char nameArr[n][8];
    printf("Enter ID Name Roll respectively in %lld time.\n", n);
    for(i=0; i<n; i++){
        printf("Input for case#%lld: ", i+1);
        scanf("%lld %s %lld", &idArr[i], &nameArr[i], &rollArr[i]);
    }

    int sizeIdArr, sizeRollArr, sizeNameArr;
    sizeIdArr = sizeof(idArr)/sizeof(long long);
    sizeRollArr = sizeof(rollArr)/sizeof(long long);
    sizeNameArr = sizeof(nameArr)/8;

    printf("The size of array element is: idArr=%d, rollArr=%d and nameArr=%d\n", sizeIdArr, sizeRollArr, sizeNameArr);

    printf("\n\tSort by ID\n\n");
    idSort(idArr, sizeIdArr, nameArr, rollArr);
    printf("\n");

    printf("\n\tSort by Roll\n\n");
    rollSort(rollArr, sizeRollArr, nameArr, idArr);
    printf("\n");

    printf("\n\tSort by Name\n\n");
    nameSort(nameArr, sizeNameArr, idArr, rollArr);


    return 0;
}

void idSort(long long *id, int arrSize, char (*name)[8], long long *roll){
    long long i, j, temp, tempRoll;
    char tempChar[8];

    for(i=0; i<arrSize-1; i++){
        for(j=i+1; j<arrSize; j++){
            if(id[i] > id[j]){

                temp = id[i];
                strcpy(tempChar, name[i]);
                tempRoll = roll[i];

                id[i] = id[j];
                strcpy(name[i], name[j]);
                roll[i] = roll[j];

                id[j] = temp;
                strcpy(name[j], tempChar);
                roll[j] = tempRoll;
            }
        }
    }

    printf("ID\tName\t\tRoll\n\n");

    for(i=0; i<arrSize; i++){
        printf("%lld\t", id[i]);
        printf("%s\t\t", name[i]);
        printf("%lld\n", roll[i]);
    }
}

void rollSort(long long *roll, int arrSize, char (*name)[8], long long *id){
    long long i, j, temp, tempId;
    char tempChar[8];

    for(i=0; i<arrSize-1; i++){
        for(j=i+1; j<arrSize; j++){
            if(roll[i] > roll[j]){

                tempId = id[i];
                strcpy(tempChar, name[i]);
                temp = roll[i];

                id[i] = id[j];
                strcpy(name[i], name[j]);
                roll[i] = roll[j];

                id[j] = tempId;
                strcpy(name[j], tempChar);
                roll[j] = temp;
            }
        }
    }

    printf("ID\tName\t\tRoll\n\n");

    for(i=0; i<arrSize; i++){
        printf("%lld\t", id[i]);
        printf("%s\t\t", name[i]);
        printf("%lld\n", roll[i]);
    }
}


void nameSort(char (*name)[8], int arrSize, long long *id, long long *roll){
    long long i, j, result, tempId, tempRoll;
    char temp[8];

    for(i=0; i<arrSize-1; i++){
        for(j=i+1; j<arrSize; j++){
            result = strcmp(name[i], name[j]);
            if(result > 0){

                strcpy(temp, name[i]);
                tempId = id[i];
                tempRoll = roll[i];

                strcpy(name[i], name[j]);
                id[i] = id[j];
                roll[i] = roll[j];

                strcpy(name[j], temp);
                id[j] = tempId;
                roll[j] = tempRoll;
            }
        }
    }

    printf("ID\tName\t\tRoll\n\n");

    for(i=0; i<arrSize; i++){
        printf("%lld\t", id[i]);
        printf("%s\t\t", name[i]);
        printf("%lld\n", roll[i]);
    }
}
