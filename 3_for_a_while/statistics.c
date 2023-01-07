//
// Created by Estrella on 2022/10/16.
//
#include <stdio.h>
int main(){
    int n,max,count;
    char x[1001];
    int in1[53]={0};
    int p,q;
    scanf("%d",&n);
    //统计每个字母个数
    getchar();
    for(int i=0;i<n;i++){
    scanf("%c",&x[i]);
    if(x[i]<='Z') in1[x[i]-39]++;
    if(x[i]>='a') in1[x[i]-97]++;
    }

    //算出等号行数
    max=in1[0];
    for(int i=0;i<52;i++) {
        if (in1[i] > max)max = in1[i];
    }
    //开始输出

    for(int i=0;i<max;i++){//控制行数
        for(int j=0;j<26;j++){
            p=1;q=1;
           if(in1[j]>=(max-i)){
               printf("=");
               p=0;
               count++;//数列数
           }else if(in1[j]>0){
               printf(" ");
               p=0;
               count++;
           }
            if(in1[j+26]>=(max-i)){
                printf("=");
                q=0;
                count++;
            }else if(in1[j+26]>0){
                printf(" ");
                q=0;
                count++;
            }
          if(p*q==0){
              printf(" ");
              count++;
          }
       }
       printf("\n");
    }
    for(int i=0;i<(count/max-1);i++){
        printf("-");
    }
    printf("\n");
    int g,h;
    for(int i=0;i<26;i++){
       g=0;
       h=0;
        if(in1[i]>0){
            printf("%c",i+97);
            g=1;
        }
        if(in1[i+26]>0){
            printf("%c",i+65);
            h=1;
        }
       if(g==1||h==1){
           printf(" ");
       }
    }
    return 0;
}