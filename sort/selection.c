//
// Created by Estrella on 2023/2/18.
//
//
// Created by Estrella on 2023/2/18.
//
#include <stdio.h>
#define len 10
int arr[len]={2,5,13,16,82,56,9,7,52,65};
int main(){

    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if(arr[i]>arr[j]){
                int swap=arr[i];
                arr[i]=arr[j]  ;
                arr[j]=swap    ;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ",arr[i]) ;
    }
    return 0;
}