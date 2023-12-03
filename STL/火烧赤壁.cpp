#include <bits/stdc++.h>
using namespace std;

int n, ans;
int a[20010], b[20010];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
  sort(a, a + n);
  sort(b, b + n);
  for (int i = 0; i < n; i++) {
    ans += b[i] - a[i];
    if (b[i] > a[i + 1] && i < n - 1) ans += a[i + 1] - b[i];
  }
  cout << ans << endl;
  return 0;
}