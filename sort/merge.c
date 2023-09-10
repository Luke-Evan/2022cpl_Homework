//
// Created by Estrella on 2023/2/18.
//
#include <stdio.h>
#define len 10
int arr[len]={2,5,13,16,82,56,45,29,52,65};
int main(){
    int tmp[len]={0};
    int l=0,r=len-1;
    int mid=(l+r)/2;
    int i=l,j=mid+1,k=0;

    while (i<=mid&&j<=r){
        if(arr[i]<arr[j]){
            tmp[k++]=arr[i++];
        } else{
            tmp[k++]=arr[j++];
        }
    }
    while (i<=mid){
        tmp[k++]=arr[i++];
    }
    while (j<=r){
        tmp[k++]=arr[j++];
    }
    for (int m = 0; m < len; m++) {
        printf("%d ",tmp[m]);
    }
    return 0;
}