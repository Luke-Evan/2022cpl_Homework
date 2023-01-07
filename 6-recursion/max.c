#include <stdio.h>
void itv(int l, int r);
int a[100005];
int ans[100005][2] = {0};
int n = 0;

int main() {

  scanf("%d", &n);
  getchar();
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  itv(0, n - 1);
  for (int i = 0; i < n; ++i) {
    if (i != n - 1) {
      printf("%d %d\n", ans[i][0], ans[i][1]);
    } else {
      printf("%d %d", ans[i][0], ans[i][1]);
    }
  }
  return 0;
}

void itv(int l, int r) {
  int max = a[l];
  int p = 0;
  for (p = l; p <= r; ++p) {
    if (a[p] > max) {
      max = a[p];
    }
  }
  for (p = l; p <= r; ++p) {
    if (a[p] == max) {
      break;
    }
  }

  if (l == r) {
    ans[p][0] = l + 1;
    ans[p][1] = r + 1;
  } else if (p == l) {
    ans[p][0] = l + 1;
    ans[p][1] = r + 1;
    itv(p + 1, r);
  } else if (p == r) {
    ans[p][0] = l + 1;
    ans[p][1] = r + 1;
    itv(l, p - 1);
  } else if (p > l && p < r) {
    ans[p][0] = l + 1;
    ans[p][1] = r + 1;
    itv(l, p - 1);
    itv(p + 1, r);
  }
}