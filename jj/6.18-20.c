//
// Created by Estrella on 2022/10/17.
//
#include <stdio.h>
int main(){
    int n,k;
    int arr[33]={0};
    scanf("%d",&n);
    for(int i=0;i<33;i++){
        arr[i]=n%2;
        n=n/2;
    }
    for(int i=31;i>-1;i--){
        printf("%d",arr[i]);
    }
    return 0;
}
