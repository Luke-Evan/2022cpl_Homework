//
// Created by Estrella on 2022/10/7.
//
#include <stdio.h>
int main (){
 int n,jc=1,sum=0;

 scanf("%d",&n);
   for(int i=1;i<=n;i++){
        for(int m=1;m<=i;m++){

            jc=jc*m;
            jc=jc%10007;

        }
        sum=jc+sum;
        jc = 1;
    }
   sum=sum%10007;
    printf("%d",sum);
    return 0;
}