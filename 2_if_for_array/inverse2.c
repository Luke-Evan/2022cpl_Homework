//
// Created by Estrella on 2022/10/11.
//
#include<stdio.h>
int main(){
    int n,i=0,k;
    char in[100007],out[100007];
    scanf("%d",&n);
    getchar();
    fgets(in, 10007, stdin);
    scanf("%d",&k);
    for(i=(k-1);i>=0;i--){
        out[k-1-i]=in[i];
    }
    for(i=k;i<=(n-1);i++){
       out[k+n-1-i]=in[i];
    }
for(i=0;i<=(n-1);i++){
    printf("%c",out[i]);
}
    return 0;
}