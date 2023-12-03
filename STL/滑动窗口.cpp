#include <bits/stdc++.h>
using namespace std;

int n, k;
int maxv[1000010], minv[1000010];
struct num {
  int id, val;
} tmp;
deque<num> maxq, minq;

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> tmp.val;
    tmp.id = i;
    while (!maxq.empty() && maxq.back().val <= tmp.val) maxq.pop_back();
    while (!minq.empty() && minq.back().val >= tmp.val) minq.pop_back();
    maxq.push_back(tmp);
    minq.push_back(tmp);
    while (maxq.front().id <= i - k) maxq.pop_front();
    while (minq.front().id <= i - k) minq.pop_front();
    maxv[i] = maxq.front().val;
    minv[i] = minq.front().val;
  }
  for (int i = k - 1; i < n; i++) cout << minv[i] << " ";
  cout << endl;
  for (int i = k - 1; i < n; i++) cout << maxv[i] << " ";
  return 0;
}