/*
Program Name: fwrite and fread function in c.
Author: Abdullah Almasud
*/
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char arr[]="Abdullah Almasud";
    char buffer[strlen(arr)+1];

    /* Open file for both reading and writing */
    fp = fopen("frw.txt","w+");

    /* Use fwrite() */
    fwrite(arr,1,strlen(arr)+1,fp);

    /* Use fseek() to sets the file position of the fp
    stream to the given offset */
    fseek(fp,0,SEEK_SET);

    /* Use fread() */
    fread(buffer,1,strlen(arr)+1,fp);

    fclose(fp);
    printf("fwrite() & fread() operation is successful and\nThe string is: %s\n", buffer);

    return 0;
}
