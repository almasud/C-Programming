/*
Problem: Header file (math.h -> sin(), cos(), tan(), asin(), acos(), atan(), sinh(), cosh(), tanh(), exp(), long(), long10(), pow(), sqrt(), fmod(), fabs(), labs(), floor(), ceil())

Author: Abdullah Almasud
*/
#include<stdio.h>
#include<math.h>
#define PI (2*acos(0)) // PI/2 = acos(0)

double toRadiun(double);
double toDegree(double);

int main(){

    double deg, val;
    printf("Enter degree to calculate sin value: ");

    while(scanf("%lf", &deg) !=EOF){

        printf("%lf\n", sin(toRadiun(deg))); // sin input as radian

        printf("Enter value to calculate sin degree: ");
        scanf("%lf", &val);
        printf("%lf\n", toDegree(asin(val))); // a sign return radian value

        printf("Enter degree to calculate sin value: ");


    }

    return 0;

}
double toRadiun(double deg){

    double rad;

    rad = deg*(PI/180);

    return rad;
}
double toDegree(double rad){
    double deg;

    deg = rad*(180/PI);

    return deg;
}
