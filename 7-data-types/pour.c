
#include <stdio.h>

void change(int k, int a, int b, int c);
int va, vb, vc, a0, b0, c0;
int j = 0;

int main() {
  int k, a, b, c;
  scanf("%d%d%d%d%d%d%d%d%d%d", &k, &va, &vb, &vc, &a, &b, &c, &a0, &b0, &c0);
  change(k, a, b, c);
  if (j > 0) {
    printf("Yes");
  } else {
    printf("No");
    return 0;
  }
}

void change(int k, int a, int b, int c) {
  if (k == -1) {
    return;
  }
  if (a == a0 && b == b0 && c == c0) {
    j++;
    return;
  }

  int o = 0;
  if (a + b < vb) { o = a + b; }
  if (a + b >= vb) { o = vb; }
  change(k - 1, 0, o, c);

  o = 0;
  if (a + c < vc) { o = a + c; }
  if (a + c >= vc) { o = vc; }
  change(k - 1, 0, b, o);

  o = 0;
  if (b + a < va) { o = a + b; }
  if (a + b >= va) { o = va; }
  change(k - 1, o, 0, c);

  o = 0;
  if (b + c < vc) { o = c + b; }
  if (c + b >= vc) { o = vc; }
  change(k - 1, a, 0, o);

  o = 0;
  if (c + a < va) { o = a + c; }
  if (a + c >= va) { o = va; }
  change(k - 1, o, b, 0);

  o = 0;
  if (b + c < vb) { o = c + b; }
  if (c + b >= vb) { o = vb; }
  change(k - 1, a, o, 0);

}