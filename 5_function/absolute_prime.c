//
// Created by Estrella on 2022/10/29.
//
#include <stdio.h>
#include <math.h>

int JudgeAbsolutePrime(int x);

int main(){
    int n=0;
    scanf("%d",&n);
    int count =0;
    for(int i=2;i<=n;i++){
        if(JudgeAbsolutePrime(i)==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

int JudgeAbsolutePrime(int x) {
    int flag = 1;
    int reverse1;
    int reverse2;
    if(x<10){
        for (int i = 2; i <= sqrt(x + 0.5); i++) {
            if (x % i == 0) {
                flag = 0;
            }
        }
    }else if(x<100){
        int tens;
        int ones;
        tens=x/10;
        ones=x%10;
        reverse1=tens+ones*10;
        for (int i = 2; i <= sqrt(x + 0.5); i++) {
            if (x % i == 0) {
                flag = 0;
                break;
            }
        }
        for(int i=2;i <= sqrt(reverse1 + 0.5); i++){
            if (reverse1 % i == 0) {
                flag = 0;
                break;
            }
        }
    }else if(x<1000){
        int huns2;
        int ones2;
        int tens2;
        ones2=x%10;
        huns2=x/100;
        tens2=(x-ones2-huns2*100)/10;
        reverse2=ones2*100+huns2+tens2*10;
        for (int i = 2; i <= sqrt(x + 0.5); i++) {
            if (x % i == 0) {
                flag = 0;
                break;
            }
        }
        for(int i=2;i <= sqrt(reverse2 + 0.5); i++){
            if (reverse2 % i == 0) {
                flag = 0;
                break;
            }
        }
    }else if(x==1000){
        flag=0;
    }
    return flag;
}