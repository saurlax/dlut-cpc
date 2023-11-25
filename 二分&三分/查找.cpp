#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int a[1000010];

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  for (int i = 0; i < m; i++) {
    scanf("%d", &q);
    int pos = lower_bound(a, a + n, q) - a;
    if (pos < n && a[pos] == q) {
      printf("%d ", pos + 1);
    } else {
      printf("-1 ");
    }
  }
  return 0;
}