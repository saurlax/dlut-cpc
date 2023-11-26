#include <bits/stdc++.h>
using namespace std;

long long len, n, m;
long long pos[50010];

bool check(int limit) {
  int count = 0, last = 0;
  for (int i = 0; i < n; i++) {
    if (pos[i] - last < limit)
      count++;
    else
      last = pos[i];
  }
  if (len - last < limit) count++;
  return count <= m;
}

int main() {
  cin >> len >> n >> m;
  for (int i = 0; i < n; i++) cin >> pos[i];
  int l = 0, r = len, mid;
  while (l < r) {
    mid = (l + r + 1) / 2;
    if (check(mid))
      l = mid;
    else
      r = mid - 1;
  }
  cout << l;
  return 0;
}