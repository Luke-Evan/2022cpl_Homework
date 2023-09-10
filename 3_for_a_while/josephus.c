
#include <stdio.h>
int main(){
    int  n,k,count=0;
    int  state[500]={0};//0 stands for alive.
    scanf("%d%d",&n,&k);
    //killing started
    for(int i=1;i<=n;i++){
        if(state[i-1]==0)  count++;
        if(count%k==0&&state[i-1]==0)   state[i-1]=1;
        if(count==(n-1)*k)    break;//dead enough
        if(i==n){
            i=0;//must be 0,it will plus 1 when going to the front
        }
    }
    for(int i=0;i<n;i++){
        if(state[i]==0){
            printf("%d",i+1);
            break;
        }
    }

    return 0;
}
