//
// Created by Estrella on 2022/10/1.
//
#include<stdio.h>
#include<math.h>
int main(){
    double ans1,ans2;
    ans1 = 4*(4* atan(0.2)- atan(1.0/239));
    ans2= log(640320.0*640320*640320+744)/ sqrt(163.0);
    printf("%.15f\n%.15f",ans1,ans2);
    return 0;

}