#include <bits/stdc++.h>
using namespace std;

int n, a[100010], b[100010];
typedef tuple<int, int, int> t;
priority_queue<t, vector<t>, greater<t>> q;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < n; i++) q.push({a[0] + b[i], 0, i});
  for (int i = 0; i < n; i++) {
    auto [sum, x, y] = q.top();
    q.pop();
    cout << sum << " ";
    if (x + 1 < n) q.push({a[x + 1] + b[y], x + 1, y});
  }
  return 0;
}
