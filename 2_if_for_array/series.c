//
// Created by Estrella on 2022/10/7.
//
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x,answer=0,end;
    scanf("%lf %d",&x,&n);
    for(int i=0;i<=n;i++){
        answer=((pow(-1,i)*pow(x,(2*i+1)))/(2*i+1))+answer;

    }
    end=4*answer;
    printf("%.10lf",end);
    return 0;
}