//
// Created by Estrella on 2022/10/23.
//
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
getchar();
    char map[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%c",&map[i][j]);
        }
        getchar();
    }
    char next_map[n+2][n+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<n+2;j++){
            if(i==0||i==(n+1)||j==0||j==(n+1)){
                next_map[i][j]='o';
            }else{
                next_map[i][j]=map[i-1][j-1];
            }
        }
    }
    for (int i = 1; i <(n+1); i++) {
        for(int j=1;j<(n+1);j++){
            int vectors[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0},{-1,1},{1,1},{1,-1},{-1,-1}};
            int count = 0;
            for (int k = 0; k < 8; ++k) {
                int newI = i + vectors[k][0];
                int newJ = j + vectors[k][1];
                if (next_map[newI][newJ] == '*') {
                    count++;
                }
            }
            if(next_map[i][j]=='*'){
                printf("*");
            }else{
                printf("%d",count);
            }
        }
        printf("\n");
    }
    return 0;
}
