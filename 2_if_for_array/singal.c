//
// Created by Estrella on 2022/10/7.
//
#include <stdio.h>
int main (){

    int x,b[1000005]={0},n,i;
    scanf("%d\n",&n);
    for (i=0;i<(2*n-1);i++)
    {
        scanf("%d",&x);
        b[x]++;
    }

    for(i=0;i<1000005;i++)
    {
        if(b[i] == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}