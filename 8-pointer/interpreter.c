#include <stdio.h>
int main() {
  int X;
  scanf("%x", &X);
  float *N = &X;
  printf("%d\n%u\n%.6f\n%.3e", X, X, *N, *N);
  return 0;
}