#include <bits/stdc++.h>
using namespace std;

int n, op, x;
priority_queue<int, vector<int>, greater<int>> q;

int main() {
  cin >> n;
  while (n--) {
    cin >> op;
    switch (op) {
      case 1: {
        cin >> x;
        q.push(x);
        break;
      }
      case 2: {
        cout << q.top() << endl;
        break;
      }
      case 3: {
        q.pop();
        break;
      }
    }
  }
  return 0;
}