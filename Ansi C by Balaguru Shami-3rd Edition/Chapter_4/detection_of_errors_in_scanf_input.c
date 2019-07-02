/*
Program Name : Detection of errors in scanf input.
Author Name : Abdullah Almasud.
*/

main (){

int a;
float b;
char c;

printf("Enter values of a, b and c\n");

//Error detecting......
if(scanf("%d %f %c",&a,&b,&c) == 3)

printf("a = %d b = %f and c = %c",a,b,c);

else

printf("Error in input.\n");


}

