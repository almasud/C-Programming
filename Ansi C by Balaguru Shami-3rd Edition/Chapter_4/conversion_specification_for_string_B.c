/*
Program Name : Illustration of conversion specification % [] for strings.Program - B.
Author Name : Abdullah Almasud.
*/

main () {

char address[80];
printf("Enter address\n");
scanf("%[^\n]",address);
printf("%-80s\n\n",address);
}
