//
// Created by Estrella on 2022/11/6.
//
#include <stdio.h>

int f[100005];
int find(int x);

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &f[i]);
  }
  for (int i = 0; i < n; ++i) {
    printf("%d ", find(i));
  }
  return 0;
}
int find(int x) {
  return f[x] == (x + 1) ? (x + 1) : find(f[x] - 1);
}