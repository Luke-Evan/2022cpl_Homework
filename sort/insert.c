//
// Created by Estrella on 2023/2/18.
//
#include <stdio.h>
#define len 10
int arr[len]={2,5,13,16,82,56,45,29,52,65};
int main(){

    for (int i = 1; i < len; i++) {
        int key=arr[i];
        for (int j = i-1; j >=0; j--) {
            if(arr[j]>key){
                arr[j+1]=arr[j];
            } else{
                arr[j+1]=key;
                break;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}