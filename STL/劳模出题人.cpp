#include <bits/stdc++.h>
using namespace std;

int n, m;
string tmp;
unordered_map<string, int> author;
vector<string> ans;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> m;
    for (int j = 0; j < m; j++) {
      cin >> tmp;
      author[tmp]++;
    }
  }
  for (auto i : author)
    if (i.second == n) ans.push_back(i.first);
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (auto i : ans) cout << i << endl;
  return 0;
}