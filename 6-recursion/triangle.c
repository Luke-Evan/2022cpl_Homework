#include <stdio.h>
#include <math.h>
#include <string.h>
void paint(int n, int x, int y);
int cvs[1024 + 50][2048 + 50];
int main() {
  memset(cvs, ' ', sizeof(cvs));
  int m = 0;
  scanf("%d", &m);
  int x = 0;
  int y = pow(2, m) - 1;
  paint(m, x, y);
  for (int i = 0; i < (int) pow(2, m); ++i) {
    for (int j = 0; j < (int) pow(2, m + 1); ++j) {
      printf("%c", cvs[i][j]);
    }
    printf("\n");
  }
  return 0;
}
void paint(int n, int x, int y) {
  if (1 == n) {
    cvs[x][y] = '/';
    cvs[x][y + 1] = '\\';
    cvs[x + 1][y - 1] = '/';
    cvs[x + 1][y] = '_';
    cvs[x + 1][y + 1] = '_';
    cvs[x + 1][y + 2] = '\\';
    return;
  } else {
    paint(n - 1, x, y);
    paint(n - 1, (int) x + pow(2, n - 1), (int) y - pow(2, n - 1));
    paint(n - 1, (int) x + pow(2, n - 1), (int) y + pow(2, n - 1));
  }
}