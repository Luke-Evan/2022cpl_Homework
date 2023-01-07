//
// Created by Estrella on 2022/10/29.
//
#include <stdio.h>
#include<math.h>

int sum(int n,int t);

int main(){
    int n=0;
    int t=0;
    scanf("%d%d",&n,&t);
    printf("%d",sum(n,t));
    return 0;
}

int sum(int n, int t){
    int sum=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<=j;k++){
            sum=sum+t* pow(10,k);
        }
    }
    return sum;
}