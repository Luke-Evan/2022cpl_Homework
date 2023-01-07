#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5000

char *C = NULL;
int top = 0;

char check(char m) {
  if (m > 64 && m < 91) {
    return m + 32;
  } else {
    return m;
  }
}

int main() {
  int tot;
  C = malloc(N * sizeof(*C));
  fgets(C, N, stdin);
  tot = strlen(C);

  for (int i = 0; i < tot; ++i) {
    *(C + i) = check(*(C + i));
  }

  *C -= 32;

  for (int i = 0; i < tot; ++i) {
    if (*(C + i) == ' ') {
      *(C + i + 1) -= 32;
    }
  }

  for (int i = 0; i < tot - 1; ++i) {
    printf("%c", *(C + i));
  }
  free(C);
  return 0;
}