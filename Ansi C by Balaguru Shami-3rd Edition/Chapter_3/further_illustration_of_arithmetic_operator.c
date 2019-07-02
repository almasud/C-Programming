/*
Program name : Further illustration of arithmetic operator.
Author name : Abdullah Almasud.
*/
main (){
    int a,b,c,d; /* Declaration of variable */
    a = 15; /* Assign value */
    b = 10;
    c = ++a - b; /* Assign value and use prefix increment. */
    printf("a = %d b = %d and c = %d\n",a,b,c);
    d = b++ +a;
    printf("a =%d b = %d and d = %d\n",a,b,d);
    printf("a/b = %d\n",a/b);
    printf("a%%b = %d\n",a%b);
    printf("a*=b = %d\n",a*=b);
    printf("(c>d?1:0) = %d\n",(c>d?1:0));
    printf("(c<d?1:0) = %d\n",(c<d?1:0));


}
