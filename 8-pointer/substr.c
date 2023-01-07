#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100050
char *S = NULL;
char *T = NULL;
int tot1;
int tot2;

void check(int n) {

  int t = 1;
  for (int i = 0; i < tot2; ++i) {
    if (*(S + n + i) != *(T + i)) {
      t = 0;
      break;
    }
  }
  if (t == 1) {
    printf("%d ", n);
  }
}

int main() {
  S = malloc(N * sizeof(*S));
  T = malloc(N * sizeof(*T));
  if (S == NULL) {
    printf("Error");
  }
  scanf("%s", S);
  scanf("%s", T);
  tot1 = (int) strlen(S);
  tot2 = (int) strlen(T);
  for (int i = 0; i < tot1; ++i) {
    if (*(S + i) == *T) {
      check(i);
    }
  }
  free(S);
  return 0;
}