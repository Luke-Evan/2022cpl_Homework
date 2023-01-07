//
// Created by Estrella on 2022/11/30.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10050

char *str1 = NULL;
char *str2 = NULL;
int T;

void catch(char *a, char *b, int l) {
  int len1 = strlen(a);
  int len2 = strlen(b);
  int k, max = 0;
  //printf("%d %d\n", len1, len2);
  if (len1 > len2) {
    k = len2;
  } else {
    k = len1;
  }
//  for (int m = len1 - 1, n = 0; m > -1, n < len2; n++, m--) {
//    if (*(a + m) == *(b + n)) {
//      *(b + n) = 0;
//      printf("%c", *(b + n));
//    } else {
//      break;
//    }
//  }
  for (int i = 1; i <= k; ++i) {
    int count = 0;
    for (int m = len1 - i, n = 0; m < len1, n < i; n++, m++) {
      //printf("%c %c\n", *(a + m), *(b + n));
      if (*(a + m) == *(b + n)) { count++; }
    }
    if (count == i) { max = count; }
  }
  //printf("%d", max);
  for (int i = 0; i < max; ++i) {
    *(b + i) = 0;
  }
  printf("%s", a);
  for (int i = 0; i < len2; ++i) {
    if (*(b + i) != 0) {
      printf("%c", *(b + i));
    }
  }
  if (l != T + 1) {
    printf("\n");
  }

}

int main() {
  str1 = malloc(N * sizeof(*str1));
  str2 = malloc(N * sizeof(*str2));

  scanf("%d", &T);
  getchar();
  for (int i = 0; i < T; ++i) {
    memset(str1, 0, N);
    memset(str2, 0, N);
    scanf("%s %s", str1, str2);
    catch(str1, str2, i);

  }
  free(str1);
  free(str2);
  return 0;
}
