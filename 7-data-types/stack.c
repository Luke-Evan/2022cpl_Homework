//
// Created by Estrella on 2022/11/26.
//
#include <stdio.h>

char stack[10000 + 50] = {0};
int process_tot = 0;

void pop() {
  if (process_tot == 0) {
    printf("Empty\n");
  } else {
    stack[process_tot] = 0;
    process_tot--;
  }
}

void push(char t) {
  process_tot++;
  stack[process_tot] = t;
}

void top() {
  if (process_tot == 0) {
    printf("Empty\n");
  } else {
    printf("%c\n", stack[process_tot]);
  }
}

void print() {
  if (process_tot == 0) {
    printf("Empty\n");
  } else {
    for (int i = process_tot; i >= 1; --i) {
      printf("| %c |\n", stack[i]);
    }
    printf("|===|");
  }

}

int main() {
  int n;
  char m;
  scanf("%d", &n);

  for (int i = 1; i <= n; ++i) {
    char op[5] = {0};
    scanf("%s", op);
    if (op[0] == 'p' && op[1] == 'u') {
      scanf(" %c", &m);
      push(m);
    } else if (op[0] == 'p' && op[1] == 'o') {
      pop();
    } else if (op[0] == 't' && op[1] == 'o') {
      top();
    } else if (op[0] == 'p' && op[1] == 'r') {
      print();
    }
  }
  return 0;
}