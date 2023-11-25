#include <bits/stdc++.h>
using namespace std;

long long n, c, a[200010];
long long ans = 0;

int main() {
  cin >> n >> c;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    int target = a[i] - c;
    ans += upper_bound(a, a + n, target) - lower_bound(a, a + n, target);
  }
  cout << ans;
  return 0;
}
