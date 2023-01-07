//
// Created by Estrella on 2022/10/23.
//
#include <stdio.h>
#define N 1050
#include <string.h>

int main(){
    int round=0;
    int len=0;
    scanf("%d",&round);
    getchar();
    char map[N];
    memset(map, '.', sizeof(map));
    scanf("%s",map);
    for(int i=0;i<N;i++){
        if(map[i]=='.'||map[i]=='A'||map[i]=='B'){
            len++;
        }if(map[i]==0){
            break;
        }
    }
    char map2[len+6];
    memset(map2, '.', sizeof(map2));
    for(int i=3;i<len+3;i++){
        map2[i]=map[i-3];
        }

    char next[len+6];
    memset(next, '.', sizeof(next));
    for(int i=0;i<round;i++){
        for(int j=3;j<len+3;j++){
            int p=0;
            int q=0;
            if(map2[j]=='.'){
                for(int k=j-3;k<=j+3;k++){
                    if(map2[k]=='A')p++;
                    if(map2[k]=='B')q++;
                }
                if(p>=2&&p<=4&&q==0){
                    next[j]='A';
                }else if(q>=2&&q<=4&&p==0){
                    next[j]='B';
                }else{
                    next[j]='.';
                }
            }
            if(map2[j]=='A'){
                p=-1;
                for(int k=j-3;k<=j+3;k++){
                    if(map2[k]=='A')p++;
                }
                for(int k=j-3;k<=j+3;k++){
                    if(map2[k]=='B'||p>=5||p<=1){
                        next[j]='.';
                        break;
                    }else{
                        next[j]=map2[j];
                    }
                }
            }
            if(map2[j]=='B'){
                q=-1;
                for(int k=j-3;k<=j+3;k++){
                    if(map2[k]=='B')q++;
                }
                for(int k=j-3;k<=j+3;k++){
                    if(map2[k]=='A'||q>=5||q<=1){
                        next[j]='.';
                        break;
                    }else{
                        next[j]=map2[j];
                    }
                }
            }
        }
        for(int w=0;w<len+6;w++) {
            map2[w]= next[w];
        }
    }
    for(int i=3;i<len+3;i++){
        printf("%c",next[i]);
    }


    return 0;
}
