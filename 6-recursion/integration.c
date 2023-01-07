#include <stdio.h>
#include <math.h>

double sim(double l, double r, double on);
double f(double x);
int co[25] = {0};
int n = 0;
int p = 0;
double a;
double b;
double de = 0.0001;

int main() {

  scanf("%d%d", &n, &p);
  getchar();
  for (int i = 0; i < n + 1; ++i) {
    scanf("%d", &co[i]);
  }
  getchar();
  scanf("%lf %lf", &a, &b);

  printf("%lf", sim(a, b, de));
  return 0;
}

double f(double x) {
  double in = 0.0;
  double ans = 0.0;
  if (x > 0) {
    for (int i = 0; i < n + 1; ++i) {
      in = in + (double) co[i] * pow(x, i);
    }
  }
  if (x == 0) {
    in = co[0];
  }
  if (x < 0) {
    for (int i = 0; i < n + 1; ++i) {
      if (i % 2 == 0) {
        in = in + co[i] * pow(-x, i);
      } else {
        in = in - co[i] * pow(-x, i);
      }
    }
  }
  if (in > 0) {
    ans = pow(in, p);
  } else if (in < 0) {
    if (p % 2 == 0) {
      ans = pow(-in, p);
    } else {
      ans = -pow(-in, p);
    }
  }
  return ans;
}

double sim(double l, double r, double on) {
  double mid = (l + r) / 2.0;
  double S = (4.0 * f(mid) + f(l) + f(r)) / 6.0 * (r - l);
  double SL = (4.0 * f((l + mid) / 2.0) + f(l) + f(mid)) / 6.0 * (mid - l);
  double SR = (4.0 * f((r + mid) / 2.0) + f(mid) + f(r)) / 6.0 * (r - mid);

  if (fabs(SL + SR - S) <= 15.0 * on) {
    return (SL + SR + (SL + SR - S) / 15.0);
  } else {
    return (sim(l, mid, (on / 2.0)) + sim(mid, r, (on / 2.0)));
  }
}