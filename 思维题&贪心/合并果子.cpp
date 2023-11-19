#include <bits/stdc++.h>
using namespace std;

int n, cost[10010], ans = 0;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> cost[i];
  for (int i = 0; i < n - 1; i++) {
    for (int j = i; j < n; j++) {
      if (cost[j] < cost[i]) swap(cost[i], cost[j]);
    }
    for (int j = i + 1; j < n; j++) {
      if (cost[j] < cost[i + 1]) swap(cost[i + 1], cost[j]);
    }

    // for (int j = i; j < n; j++) cout << cost[j] << " ";

    cost[i + 1] += cost[i];
    ans += cost[i + 1];
  }
  cout << ans;
  return 0;
}
