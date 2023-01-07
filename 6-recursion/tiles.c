//
// Created by Estrella on 2022/11/
#include <stdio.h>

int main() {
  int n = 0;
  int f[50] = {0};
  f[1] = 1;
  f[2] = 2;
  f[3] = 3;
  scanf("%d", &n);

  for (int i = 4; i < 50; ++i) {
    f[i] = f[i - 1] + f[i - 2];
  }
  printf("%d", f[n]);
  return 0;
}