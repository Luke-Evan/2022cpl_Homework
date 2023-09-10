#include <stdio.h>
#define N 1000
int n;
char in[N];
int cnt=0,gw=0;
int main(){
    scanf("%d",&n);
    getchar();
    gets(in);
    //解决单边问号
    for(int i=0;i<n;i++) {
        if (in[i] == '?')in[i] = in[n - i - 1];
    }
    //only symmetric '?' exist
    for(int i=0;i<n;i++){
        if(in[i]!='?'){
            printf("%c",in[i]);
        }else{
            if(i<n/2){
                in[i]=cnt;
                printf("%.2d",cnt);
                cnt++;
            }else{
                gw=in[n-i-1]%10;
                printf("%d%d",gw,(in[n-i-1]-gw)/10);
            }
        }
    }
    return 0;
}