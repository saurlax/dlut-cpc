#include <bits/stdc++.h>
using namespace std;

int gift[30000];

int main() {
  int max, n, ans = 0;
  cin >> max >> n;
  for (int i = 0; i < n; i++) cin >> gift[i];
  sort(gift, gift + n);

  for (int *l = gift, *r = gift + n - 1; l <= r;) {
    if (*l + *r <= max) l++;
    r--;
    ans++;
  }

  cout << ans;
  return 0;
}