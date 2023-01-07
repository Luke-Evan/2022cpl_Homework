#include <stdio.h>
#define MAX 2001
int main(){
    int n;
    int p[MAX]={0};
    int p2[MAX]={0};
    int pk=0;
    int m=0;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=(n-1);i>0;i--){
        if (p[i-1]<p[i]){
          m=n-i;
          pk=p[i-1];
          for(int j=n-1;j>=i;j--){
              if(p[j]>pk){
                  int tmp;
                  tmp=p[j];
                  p[j]=pk;
                  p[i-1]=tmp;
                  break;
              }
          }
          break;
      }
    }
    for(int i=0;i<(n-m);i++){
        p2[i]=p[i];
    }
    for(int i=(n-m);i<n;i++){
        p2[i]=p[2*n-m-1-i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",p2[i]);
    }
    return 0;
}