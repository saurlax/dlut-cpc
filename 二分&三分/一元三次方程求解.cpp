#include <bits/stdc++.h>
using namespace std;

double coe[4], eps = 1e-3;

double f(double x) {
  double res = 0;
  for (int i = 0; i <= 3; i++) res += coe[i] * pow(x, 3 - i);
  return res;
}

int main() {
  for (int i = 0; i < 4; i++) cin >> coe[i];
  double l, r, mid;
  for (int i = -100; i < 100; i++) {
    l = i, r = i + 1;
    if (f(l) == 0) {
      printf("%.2lf ", l);
      continue;
    } else if (f(i) * f(i + 1) < 0) {
      while (r - l > eps) {
        mid = (l + r) / 2;
        if (f(l) * f(mid) > 0) {
          l = mid;
        } else {
          r = mid;
        }
      }
      printf("%.2lf ", l);
    }
  }
  return 0;
}