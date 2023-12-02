#include <bits/stdc++.h>
using namespace std;

int n;
string a[20];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n, [](string a, string b) { return a + b > b + a; });
  for (int i = 0; i < n; i++) cout << a[i];
  return 0;
}