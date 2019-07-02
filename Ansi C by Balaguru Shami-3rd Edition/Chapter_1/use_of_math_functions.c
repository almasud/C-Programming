/*
Program name : Sample program 5 : Use of math functions.
Author name : Abdullah Almasud.
*/

/* Program using cosine function */
#include <math.h>
#define PI 3.1416
#define MAX 180

main(){

    int angle;
    float x,y;

    angle = 0;
    printf("           Angle        Cos(angle)\n\n");

    while (angle <= MAX){

        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%15d  %13.4f\n",angle,y);
        angle = angle+10;
    }
}
