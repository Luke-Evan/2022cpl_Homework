//
// Created by Estrella on 2022/10/16.
//
#include <stdio.h>
#include <math.h>
int main(){
    int len ,N,decimal=0;
    scanf("%d%d",&len,&N);
    getchar();
    char  s1[31],s2[31];
    scanf("%s",s1);
    for(int i=0,k=len-1;i<len,k>-1;i++,k--){
        if(s1[i]<=57){
            s2[i]=s1[i]-48;
            decimal=decimal+s2[i]* pow(N,k);
        }
        if(s1[i]>=65){
            s2[i]=s1[i]-55;
            decimal=decimal+s2[i]* pow(N,k);
        }
        if(s2[i]>=N){
            printf("Error");
            goto end;
        }
    }
printf("%d",decimal);
    end:
    return 0;
}