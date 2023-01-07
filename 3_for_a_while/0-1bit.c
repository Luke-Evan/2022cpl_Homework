//
// Created by Estrella on 2022/10/15.
//
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(sqrt(i)-(int) sqrt(i)==0){
            printf("%d",i);
            printf(" ");
        }
    }
    return 0;
}