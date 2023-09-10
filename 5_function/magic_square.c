#include <stdio.h>

void Cube(int n);

int square[1001][1001]={0};

int main(){
    int n;
    scanf("%d",&n);
    Cube(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", square[j][i]);
        }printf("\n");
    }
    return 0;
}

void Cube(int n){
    int y = 0;
    int x = (n - 1) / 2;
    square[x][y] = 1;
    for (int i = 2; i <= n * n; i++){
        int xt = x;
        int yt = y;
        if(x == (n - 1)){
            xt = 0;
        }else{
            xt++;
        }
        if(y == 0 ){
            yt = n - 1;
        }else{
            yt--;
        }
        if( square[xt][yt] !=0 ){
            if(y == (n - 1)) {
                y = 0 ;
            } else{
                y++;
            }
        }else{
            x = xt;
            y = yt;
        }
        if(square[x][y] == 0 ){
            square[x][y] = i;
        }else{
            y++;
            square[x][y] = i;
        }
    }
}