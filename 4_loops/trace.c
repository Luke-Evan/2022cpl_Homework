//
// Created by Estrella on 2022/10/23.
//
#include <stdio.h>
int main(){
    int n,m,x0,y0=0;
    scanf("%d%d%d%d",&n,&m,&x0,&y0);
    getchar();
    char map[n][m];
    int count = 0;
    char map2[n+2][m+2];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%c",&map[i][j]);
            if(map[i][j]=='#')count++;
        }
        getchar();
    }
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            if(i==0||i==n+1||j==0||j==m+1){
                map2[i][j]='_';}else{
                map2[i][j]=map[i-1][j-1];
            }
        }
    }
    printf("%d",count);
    printf("\n");

    int vectors[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int i=x0,j=y0;
    printf("%d %d",i ,j);
    printf("\n");

    while(map2[i][j]!='_'){
        map2[i][j]='_';
        for (int k = 0; k < 4; ++k) {
          int newI = i + vectors[k][0];
          int newJ = j + vectors[k][1];
        if (map2[newI][newJ] == '#') {
            map2[i][j]='_';
            i=newI;
            j=newJ;
            printf("%d %d",newI ,newJ);
            printf("\n");
        }
       }
    }
    return 0;
    }





