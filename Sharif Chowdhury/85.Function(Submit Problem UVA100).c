/*
Problem: p100
Author: Abdullah Almasud
*/
#include<stdio.h>

long long uva100(long long);
long long maxCycle(long long a, long long b);

int main(){

    long long a, b;

    while(scanf("%lld %lld", &a, &b) != EOF)

        printf("%lld %lld %lld\n", a, b, maxCycle(a, b));

    return 0;
}

long long uva100(long long n){

    if(n == 1)
        return 1;
    else if(n&1)
        return uva100(3*n+1) + 1;
    else
        return uva100(n/2) + 1;

}

long long maxCycle(long long a, long long b){

    if(a > b)
        return maxCycle(b, a);

    long long max = 0, cycle;
    while(a <= b){

        cycle = uva100(a);
        if(max < cycle)
            max = cycle;
        a++;
    }

    return max;
}
