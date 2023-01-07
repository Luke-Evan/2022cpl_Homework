//
// Created by Estrella on 2022/11/27.
//
#include <stdio.h>
#include <string.h>

#define N 1000+50

int a, b, c;
int x, y;
char str[N];

void check(char m) {
  if (m == 'W') {
    int n = b;
    x = x - b;
    b = c;
    c = n;

  } else if (m == 'S') {
    int q = b;
    x = x + c;
    b = c;
    c = q;

  } else if (m == 'A') {
    int p = a;
    y = y - a;
    a = c;
    c = p;

  } else if (m == 'D') {
    int u = c;
    y = y + c;
    c = a;
    a = u;

  }

}

int main() {
  scanf("%d%d%d", &b, &a, &c);
  getchar();
  scanf("%s", str);
  y = a;
  x = b;
  int tot = strlen(str);
  for (int i = 0; i < tot; ++i) {
    check(str[i]);
  }
  printf("%d %d %d %d", x - b, x, y - a, y);
  return 0;
}