#include <bits/stdc++.h>
using namespace std;

int n, m;
list<int>::iterator it[100010];
list<int> stu;

int main() {
  cin >> n;
  stu.push_back(1);
  it[1] = stu.begin();
  for (int i = 2; i <= n; i++) {
    int target, right;
    cin >> target >> right;
    auto pos = it[target];
    if (right) pos++;
    it[i] = stu.insert(pos, i);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    int target;
    cin >> target;
    if (it[target] != stu.end()) {
      stu.erase(it[target]);
      it[target] = stu.end();
    }
  }
  for (auto i : stu) cout << i << " ";
  return 0;
}