/*
Topic: 118.File Management(File Input Output Function)
Author: Abdullah Almasud
*/
//fprintf(), fscanf(), putc(), getc(), fputs(), fgets(), fread() and fwrite()

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct myStruct{
    char name[20];
    char id[20];
    char address[30];
};

int main(){

    FILE *fp, *fp2;
    //char str[100] = "Abdullah Almasud", str2[100];
    struct myStruct in = {"Abdullah Almasud", "121", "Dinajpur"}, out;
    /*
    // fprintf() and fscanf()
    fp = fopen("files/io_function.txt", "w");
    fprintf(fp, "%s", str);
    fclose(fp);
    fp2 = fopen("files/io_function.txt", "r");
    fscanf(fp2, "%[^\n]s", str2);
    printf("%s\n", str2);
    fclose(fp2);
    */
    /*
    //putc() and getc()
    fp = fopen("files/io_function.txt", "w");
    int i = 0, j = 0, k = 0;
    while(putc(str[i], fp) != '\0')
        i++;
    str[i] = '\0';
    fclose(fp);
    fp2 = fopen("files/io_function.txt", "r");
    while(j <= strlen(str)){
        str2[j] = getc(fp2);
        j++;
    }
    str2[j] = '\0';
    while(str2[k] != '\0'){
        putchar(str2[k]);
        k++;
    }
    fclose(fp2);
    */
    /*
    //fputs() and fgets()
    fp = fopen("files/io_function.txt", "w");
    fputs(str, fp);
    fclose(fp);
    fp = fopen("files/io_function.txt", "r");
    fgets(str2, 17, fp);
    printf("%s\n", str2);
    fclose(fp);
    */

    //read() and fwrite()
    fp = fopen("files/io_function.txt", "w");
    fwrite(&in, sizeof(in), 1, fp);
    fclose(fp);
    fp2 = fopen("files/io_function.txt", "r");
    fread(&out, sizeof(in), 1, fp);
    printf("%s\n", out.address);


    return 0;
}
