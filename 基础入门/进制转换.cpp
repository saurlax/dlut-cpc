#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  string n;
  cin >> m >> n;
  bool first = true;
  while (n.length()) {
    if (n[0] != '0') {
      if (first) {
        first = false;
      } else {
        cout << '+';
      }
      cout << n[0] << '*' << m << '^' << n.length() - 1;
    }
    n.erase(0, 1);
  }
  return 0;
}
