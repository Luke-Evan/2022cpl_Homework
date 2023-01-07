//
// Created by Estrella on 2022/10/23.
//
#include <stdio.h>
#define row 9
#define col 9
int main(){
    int in[row][col]={0};
    int count[9]={0};
   //scan and judge ?>=10
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           scanf("%d",in[i][j]);
           if(in[i][j]>9)goto NO;
        }
    }
    //横行要有1-9
    for(int  i=0;i<row;i++){
        for(int j=0;j<col;j++){
            count[in[i][j]]++;
        }
        for(int j=0;j<col;j++){
            if(count[j]!=1){
               goto NO;}else{
                count[j]=0;
            }
        }
    }
    NO:printf("NO");



return 0;
}