#include <bits/stdc++.h>
using namespace std;

int n, l, r, mid;
long long m, tree[1000010];

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) cin >> tree[i];
  l = 0, r = *max_element(tree, tree + n);
  while (l < r) {
    mid = (l + r) / 2;
    long long res = 0;
    for (int i = 0; i < n; i++) res += max(0ll, tree[i] - mid);
    if (res < m)
      r = mid;
    else
      l = mid + 1;
  }
  cout << l - 1;
  return 0;
}