//
// Created by Estrella on 2023/2/18.
//
#include <stdio.h>
#define len 10
int arr[len]={2,5,13,16,82,56,45,29,52,65};
int main(){
    int tmp;
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-i-1; j++) {
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}