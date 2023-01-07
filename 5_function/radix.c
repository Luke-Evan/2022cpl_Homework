#include <stdio.h>

int change(int n,int i);

int main(){
    int p;
    int q;
    int r;
    scanf("%d%d%d",&p,&q,&r);
    for(int i=2;i<=40;i++){
        int p1;
        int q1;
        int r1;
        p1=change(p,i);
        q1= change(q,i);
        r1= change(r,i);
        if(p1==0||q1==0||r1==0){
            continue;
        }else if(p1*q1==r1){
            printf("%d",i);
            break;
        }
        if(i==40){
            printf("%d",0);
        }
    }
    return 0;
}

int change(int n,int i){
    int tens;
    int ones;
    int ans;
    tens=n/10;
    ones=n%10;
    if(tens>=i||ones>=i){
        ans=0;
    }else{
        ans=tens*i+ones;
    }
    return ans;
}