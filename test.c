#include <stdio.h>
#define len 10
int arr[len]={1,65,23,85,96,45,72,86,46,3};
int main(){
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len-1-i; j++) {
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
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