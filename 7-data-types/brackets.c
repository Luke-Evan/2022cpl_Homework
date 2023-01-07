#include <stdio.h>
#include <string.h>
char stack[100000 + 50] = {0};
char str_stack[100000 + 50] = {0};
int process_tot = 0;
void push(char t) {
  process_tot++;
  str_stack[process_tot] = t;
}
void pop(char t) {
  if (t == '}') {
    if (str_stack[process_tot] == '{') {
      str_stack[process_tot] = 0;
      process_tot--;
    } else {
      push(t);
    }
  }
  if (t == ')') {
    if (str_stack[process_tot] == '(') {
      str_stack[process_tot] = 0;
      process_tot--;
    } else {
      push(t);
    }
  }
  if (t == ']') {
    if (str_stack[process_tot] == '[') {
      str_stack[process_tot] = 0;
      process_tot--;
    } else {
      push(t);
    }
  }
}
void check(char t) {
  if (t == '[' || t == '{' || t == '(') { push(t); }
  else { pop(t); }
}
int main() {
  int T;
  scanf("%d", &T);
  for (int i = 1; i <= T; ++i) {
    memset(str_stack, 0, sizeof(str_stack));
    process_tot = 0;
    scanf("%s", stack);
    int t = strlen(stack);
    for (int j = 0; j < t; ++j) {
      check(stack[j]);
    }
    if (process_tot == 0) { printf("True\n"); }
    else { printf("False\n"); }
  }
  return 0;
}