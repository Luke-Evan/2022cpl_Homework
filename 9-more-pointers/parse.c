#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int num_val=0;
  char *name=calloc(50 , 1);
  char *rule = calloc(150 , 1);
  char *command = calloc(1050 , 1);
  char *true_para= calloc(512,1000);

  scanf("%s %s",rule,name);

  while(scanf("%s", command)!=EOF){
    if(*command!='-'){ continue;}
    else{
      char *position= strchr(rule,*(command+1));
      if(position==NULL){
        printf("%s: invalid option -- '%c'",name,*(command+1));
        return 0;
      }else{
        *(true_para + num_val*1000)=*(command+1);
        num_val++;
        if(*(position+1)==':'){
          char *m= calloc(1,1000);
          if(scanf("%s",m)!=EOF){
            *(true_para + (num_val-1)*1000+1)='=';
            strcpy(true_para + (num_val-1)*1000+2,m);
          }else{
            printf("%s: option requires an argument -- '%c'",name,*(command+1));
            return 0;
          }
        }
      }
    }
  }
  printf("%s\n",name);
  for (int i = 0; i < num_val; ++i) {
    printf("%s\n",true_para+1000*i);
  }
  return 0;
}