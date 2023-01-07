//
// Created by Estrella on 2022/10/19.
//
#include <stdio.h>
#define N 100
int main(){
    int n=0,k=0,pivot=0,j=0;
    int a[N];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    pivot=a[k-1];
    int l=0,r=n-1;
    while(l!=r){
        while(1){
            if(l==r)break;
            if(a[l]>=pivot)break;
            l++;
        }
        while(1){
            if(l==r)break;
            if(a[r]<pivot)break;
            r--;
        }
        if(l!=r){
            int tep=a[l];
            a[l]=a[r];
            a[r]=tep;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==pivot){
            j=i;
        }
    }
    if(a[l]>pivot && l<j){
        int tep=a[l];
        a[l]=a[j];
        a[j]=tep;
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1)printf(" ");
    }
    return 0;
}