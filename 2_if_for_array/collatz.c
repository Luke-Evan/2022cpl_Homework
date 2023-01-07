//
// Created by Estrella on 2022/10/8.
//
#include <stdio.h>
int main(){
    int n,mol,max,i;
    scanf("%d",&n);

    max=n;
    for(i=0;n!=1;i++) {
        mol=n%2;
        if (mol == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if(max<n){
            max=n;
        }
    }
    printf("%d %d",i,max);
    return 0;
}