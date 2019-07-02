/*
Program Name : Illustration of conversion specification % [] for strings.Program - A.
Author Name : Abdullah Almasud.
*/

main(){

char address[80];
printf("Enter address\n");
scanf("%[a-z]",address);
printf("%-80s\n\n",address);
}
