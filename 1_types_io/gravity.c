//
// Created by Estrella on 2022/10/2.
//
#include<stdio.h>
int main (){
    double G=6.674e-11,M=77.15,m,R,answer;
    scanf("%lf %lf",&m,&R);
    answer=(G*M*m)/(R*R);
    printf("%.3e",answer);
    return 0;
}