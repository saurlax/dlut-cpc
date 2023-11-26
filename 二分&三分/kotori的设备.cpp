#include <bits/stdc++.h>
using namespace std;

int n, p;
int device[100010][2];

int main() {
  cin >> n >> p;
  for (int i = 0; i < n; i++) cin >> device[i][0] >> device[i][1];
  int total = 0;
  for (int i = 0; i < n; i++) total += device[i][0];
  if (total <= p) cout << -1;
  // 明天再做吧 (¦3[▓▓]
  return 0;
}