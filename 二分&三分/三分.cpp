#include <bits/stdc++.h>
using namespace std;

int n;
double l, r, coe[15], eps = 1e-6;

double f(double x) {
  double res = 0;
  for (int i = 0; i <= n; i++) res += coe[i] * pow(x, n - i);
  return res;
}

int main() {
  cin >> n >> l >> r;
  for (int i = 0; i <= n; i++) cin >> coe[i];
  while (r - l > eps) {
    double mid = (l + r) / 2;
    if (f(mid - eps) > f(mid + eps))
      r = mid;
    else
      l = mid;
  }
  cout << (l + r) / 2;
  return 0;
}