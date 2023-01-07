
#include <stdio.h>
#include <string.h>

int cvs[300][300];
int len[55];
int wid[55];
int hei[55];
void paint(int n, int i);

int main() {
  memset(cvs, ' ', sizeof(cvs));
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d%d%d", &len[i], &wid[i], &hei[i]);
    getchar();
  }
  //change cvs
  for (int i = 0; i < n; ++i) {
    int a = 0;
    for (int j = 0; j < i; ++j) {
      a = a + 2 * hei[j] + 2 * wid[j] + 1;
    }
    a = a + 2 * wid[i];
    paint(i, a);
  }
  //point out
  for (int i = 0; i < n; ++i) {
    int a = 0;
    for (int j = 0; j < i; ++j) {
      a = a + 2 * hei[j] + 2 * wid[j] + 1;
    }
    a = a + 2 * wid[i];

    for (int k = a - 2 * wid[i]; k < a + 2 * hei[i] + 1; ++k) {
      for (int j = 0; j < 2 * len[i] + 1 + 2 * wid[i]; ++j) {
        printf("%c", cvs[k][j]);
      }
      printf("\n");
    }
  }
  return 0;
}

void paint(int n, int i) {
//first line
  for (int j = 0; j < len[n] * 2 + 1; j = j + 2) {
    cvs[i][j] = '+';
  }
  for (int j = 1; j < len[n] * 2 + 1; j = j + 2) {
    cvs[i][j] = '-';
  }
  //front side
  for (int k = i + 2; k < i + hei[n] * 2 + 1; k += 2) {
    for (int j = 0; j < len[n] * 2 + 1; ++j) {
      cvs[k][j] = cvs[k - 2][j];
    }
  }
  for (int k = i + 1; k < i + hei[n] * 2 + 1; k += 2) {
    for (int j = 0; j < len[n] * 2 + 1; j += 2) {
      cvs[k][j] = '|';
    }
  }
  //upside
  int p = -2;
  for (int k = i - 2; k > i - wid[n] * 2 - 1; k -= 2) {
    p += 2;
    for (int j = p; j < p + len[n] * 2 + 1; ++j) {
      cvs[k][j + 2] = cvs[k + 2][j];
    }
  }
  int m = -1;
  for (int k = i - 1; k > i - wid[n] * 2 - 1; k -= 2) {
    m += 2;
    for (int j = m; j < m + len[n] * 2 + 1; j += 2) {
      cvs[k][j] = '/';
    }
  }
  //right side
  int b = i + 1;
  for (int j = 2 * len[n] + 2; j < 2 * len[n] + 1 + 2 * wid[n]; j += 2) {
    b -= 2;
    for (int k = b; k < b + 2 * hei[n]; k += 2) {
      cvs[k][j] = '|';
    }
  }
  int e = i;
  for (int j = 2 * len[n] + 1; j < 2 * len[n] + 1 + 2 * wid[n]; j++) {
    e -= 1;
    for (int k = e; k < e + 2 * hei[n]; k += 2) {
      cvs[k + 2][j] = cvs[k][j];
    }
  }
}