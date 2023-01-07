
#include<stdio.h>
#include<math.h>
int main(){
    int len ,N,demical=0;
    scanf("%d%d",&len,&N);
    getchar();
    char  s[31]={0};
    scanf("%s",s);
  if(N<=10){
    for(int i=0;i<len;i++){
        if(s[i]>=N+48){
            printf("Error");
           goto end;
        }
    }
    for(int j=0,k=len-1;j<len,k>-1;j++,k--){
        demical=demical+(s[j]-48)* pow(N,k);
    }
    printf("%d",demical);
  }
  if(N>=11){
      for(int i=0;i<len;i++){
          if(s[i]>=N+65){
              printf("Error");
              goto end;
          }
      }
      for(int j=0,k=len-1;j<len,k>-1;j++,k--){
          if(s[j]<58)demical=demical+(s[j]-48)* pow(N,k);
          else demical=demical+(s[j]-55)* pow(N,k);
      }
      printf("%d",demical);
  }end:
  return 0;
}