//
// Created by Estrella on 2022/10/2.
//
#include <stdio.h>
#include <math.h>

int main(){
    double p,q;
    float x1;
    scanf("%lf %lf",&p,&q);
    x1= cbrt(-q/2+ sqrt(q*q/4+p*p*p/27))+ cbrt(-q/2- sqrt(q*q/4+p*p*p/27));
    printf("%.3f",x1);

    return 0;
}