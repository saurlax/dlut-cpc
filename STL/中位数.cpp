#include <bits/stdc++.h>
using namespace std;

int n, m, tmp;
string op;
priority_queue<int> l;
priority_queue<int, vector<int>, greater<int>> g;

void push(int x) {
  if (!l.size() || x < l.top())
    l.push(x);
  else
    g.push(x);
  if (l.size() > g.size() + 1) g.push(l.top()), l.pop();
  if (g.size() > l.size() + 1) l.push(g.top()), g.pop();
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    push(tmp);
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> op;
    if (op == "mid") {
      if (g.size() > l.size())
        cout << g.top() << endl;
      else
        cout << l.top() << endl;
    } else {
      cin >> tmp;
      push(tmp);
    }
  }
  return 0;
}