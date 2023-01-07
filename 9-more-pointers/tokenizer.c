//
// Created by Estrella on 2022/11/30.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 5000

char *s = {0};
int *ans={0};
int process_tot=0;
int vral_error=0;
//reserved
int check1(const char *n){
  if(strcmp(n,"const")==0||strcmp(n,"int")==0||strcmp(n,"float")==0||strcmp(n,"double")==0||strcmp(n,"long")==0||strcmp(n,"static")==0
  ||strcmp(n,"void")==0||strcmp(n,"char")==0||strcmp(n,"extern")==0||strcmp(n,"return")==0||strcmp(n,"break")==0||strcmp(n,"enum")==0
  ||strcmp(n,"struct")==0||strcmp(n,"typedef")==0||strcmp(n,"union")==0||strcmp(n,"goto")==0){
    return 1;
  }else{
    return 0;
  }
}
//integer
int check2(const char *m) {
  int cot = 0;
  int len = (int)strlen(m);
  for (int i = 0; i < len; ++i) {
    if (*(m + i) >= '0' && *(m + i) <= 57) {
      cot++;
    }
  }
  if (cot==len){return 1;}
  else{return 0;}
}
//float
int check3(const char *m){
  int cot=0;
  int len = (int)strlen(m);
  for (int i = 0; i < len; ++i) {
    if (*(m + i) >= 48 && *(m + i) <= 57) {
      cot++;
    }
  }
  for (int i = 0; i < len; ++i) {
    if (*(m + i) =='.') {
      cot++;
      break;
    }
  }
  if(cot==len){return 1;}
  else{return 0;}
}
//operator
int check4(const char *n){
  if(*n=='+'||*n=='-'||*n=='*'|| *n=='/'||*n=='<'||*n== '>'||*n== '='||strcmp(n,"==")==0||strcmp(n,"<=")==0||strcmp(n,">=")==0||strcmp(n,"!=")==0){
    return 1;
  }else{
    return 0;
  }
}
//variable
int check5(const char *n) {
  if (*n >= 48 && *n <= 57) {
    vral_error = 1;
    return 0;
  } else {
    int len = (int) strlen(n);
    int cot = 0;
    for (int i = 0; i < len; ++i) {
      if ((*(n + i) >= 48 && *(n + i) <= 57) || (*(n + i) >= 'a' && *(n + i) <= 'z')
          || (*(n + i) >= 'A' && *(n + i) <= 'Z') || (*(n + i) == '_')) {
        cot++;
      }
    }
    if (cot == len) { return 1; }
    else { return 0; }
  }
}

void process(const char *m) {
  if(*m==0){ return;}
  else if (check1(m) == 1) { *(ans + process_tot) = 1; }
  else if (check2(m) == 1) { *(ans + process_tot) = 2; }
  else if (check3(m) == 1) { *(ans + process_tot) = 3; }
  else if (check4(m) == 1) { *(ans + process_tot) = 4; }
  else if (check5(m) == 1) { *(ans + process_tot) = 5; }
  else{ *(ans + process_tot) = 7; }
  process_tot++;
}

int main() {
  s = malloc(N * sizeof(*s));
  ans = malloc( N * sizeof(*ans));
  //scan and process
  while (scanf("%s", s) != EOF) {
    const char *position = strchr(s, ';');// if there's no ';' in s, it returns NULL.
    if (position == NULL) {process(s);}
    else {
      int front_tot =(int)(position - s);
      char *front = calloc((5 + front_tot) * sizeof(front),sizeof(front));
      for (int i = 0; i < front_tot; ++i) {
        *(front + i) = *(s + i);
      }
      process(front);
      //define whether process the position
      if((int)(position-s)== strlen(s)-1){//';' is at the end of the str or only ';'
        *(ans + process_tot) = 6;
        process_tot++;
      }else{
        *(ans + process_tot) = 6;
        process_tot++;
        process(position+1);
      }
      free(front);
    }
  }
  //putout
  if(vral_error==1){
    printf("Compile Error");
    return 0;}
  for (int i = 0; i <process_tot ; ++i) {
    if(*(ans+i)==7){
      printf("Compile Error");
      return 0;
    }
  }
  for (int i = 0; i < process_tot; ++i) {
    if(*(ans+i)==1){ printf("reserved ");}
    if(*(ans+i)==2){ printf("integer ");}
    if(*(ans+i)==3){ printf("float ");}
    if(*(ans+i)==4){ printf("operator ");}
    if(*(ans+i)==5){ printf("variable ");}
    if(*(ans +i) == 6){ printf("\n");}
  }
  free(s);
  free(ans);
  return 0;
  }
