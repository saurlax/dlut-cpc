#include <bits/stdc++.h>
using namespace std;

int n, p;
double dev[100010][2];

bool check(double t) {
  double sum = t * p;
  for (int i = 0; i < n; i++) {
    double cost = dev[i][0] * t - dev[i][1];
    if (cost <= 0) continue;
    sum -= cost;
    if (sum < 0) return false;
  }
  return true;
}

int main() {
  cin >> n >> p;
  double total = 0;
  for (int i = 0; i < n; i++) {
    cin >> dev[i][0] >> dev[i][1];
    total += dev[i][0];
  }
  if (total <= p) {
    cout << -1;
    return 0;
  }
  double l = 0, r = 1e10, mid;
  while (r - l > 1e-6) {
    mid = (l + r) / 2;
    if (check(mid))
      l = mid;
    else
      r = mid;
  }
  cout << l;
  return 0;
}