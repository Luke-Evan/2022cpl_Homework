#include <stdio.h>

int C(int a, int b);

int main() {
  int a = 0;
  int b = 0;
  scanf("%d%d", &a, &b);
  printf("%d", C(a - 1, b - 1));
  return 0;
}

int C(int a, int b) {
  return (0 == b || 1 == a || a == b) ? 1 : (C(a - 1, b - 1) + C(a - 1, b));
}