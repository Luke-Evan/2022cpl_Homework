//
// Created by Estrella on 2022/10/30.
//
#include<stdio.h>
int main(){
    int s0;
    int i;
    int n;
    int t;
    int o;
    scanf("%d%d%d%d%d",&s0,&i,&n,&t,&o);
    switch (s0) {
        case 0:
            if(o==i){
                printf("%d",1);
            }else{
                printf("%d",0);
            }
            break;
        case 1:
            if(o==i){
                printf("%d",1);
            }else if(o==n){
                printf("%d",2);
            }else{
                printf("%d",0);
            }
            break;
        case 2:
            if(o==i){
                printf("%d",1);
            }else if(o==t){
                printf("%d",3);
            }else{
                printf("%d",0);
            }
            break;
        case 3:
            if(o==i){
                printf("%d",1);
            }else{
                printf("%d",0);
            }
            break;
        default:
            break;
    }
    return 0;
}