#include <bits/stdc++.h>
using namespace std;

int n, tmp, ans = 0;
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> tmp;
    ans = gcd(ans, abs(tmp));
  }
  cout << ans;
  return 0;
}
