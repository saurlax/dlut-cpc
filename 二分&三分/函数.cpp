#include <bits/stdc++.h>
using namespace std;

int q, n, coe[10010][3];
double ans[10010], eps = 1e-9;

double f(double x) {
  for (int i = 0; i < n; i++) {
    ans[i] = coe[i][0] * x * x + coe[i][1] * x + coe[i][2];
  }
  return *max_element(ans, ans + n);
}

int main() {
  for (cin >> q; q; q--) {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> coe[i][0] >> coe[i][1] >> coe[i][2];
    double l = 0, r = 1000, mid;
    while (r - l > eps) {
      mid = (l + r) / 2;
      if (f(mid - eps) > f(mid + eps))
        l = mid;
      else
        r = mid;
    }
    printf("%.4lf\n", f(mid));
  }
  return 0;
}