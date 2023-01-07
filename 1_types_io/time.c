//
// Created by Estrella on 2022/10/2.
//
#include <stdio.h>
int main(){
    int dd, hh ,mm, ss ,yyyy;
    char www[10], mmm[10];
    scanf("%s %d %d %s %d %d %d",mmm,&dd,&yyyy,www,&hh,&mm,&ss);
    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d",www,mmm,dd,hh,mm,ss,yyyy);

    return 0;
}
