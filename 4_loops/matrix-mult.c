//
// Created by Estrella on 2022/10/23.
//
#include <stdio.h>
int main(){
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    getchar();
    int A[100][100]={0},B[100][100]={0},C[100][100]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
        getchar();
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&B[i][j]);
        }
        getchar();
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0,l=0;k<n,l<n;k++,l++){
                  C[i][j]=C[i][j]+A[i][k]*B[l][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
           if(j!=p-1){
               printf("%d ",C[i][j]);
           }else{
               printf("%d",C[i][j]);
           }
        }
        printf("\n");
    }

    return 0;
}