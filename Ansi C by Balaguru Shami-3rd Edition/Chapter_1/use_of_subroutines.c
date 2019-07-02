/*
Program name : Sample program 4 : Use of subroutines.
Author name : Abdullah Almasud.
*/

/* Program using function */
int mul(int a,int b); /* Declaration */
/* Main program begins */
main(){

int a,b,c;

a = 5;
b = 10;
c = mul(a,b);

printf("Multiplication of %d and %d is %d",a,b,c);

} /* Main program ends */
/* mul() function starts */
int mul (int x,int y){

    int p;
    p = x*y;

    return (p);
}/* mul() function ends */
