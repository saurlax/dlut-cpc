#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000010];
int maxv[1000010], minv[1000010];
deque<int> maxq, minq;

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i];
  maxv[0] = a[0];
  maxq.push_back(0);
  minv[0] = a[0];
  minq.push_back(0);
  for (int i = 1; i < n; i++) {
    if (a[i] >= maxv[i - 1]) {
      maxv[i] = a[i];
      maxq.clear();
    } else {
      while (maxq.front() < i - k + 1) maxq.pop_front();
      while (maxv[maxq.back()] <= a[i]) maxq.pop_front();
      maxv[i] = *max_element(a + maxq.front(), a + maxq.back() + 1);
    }
    maxq.push_back(i);
    if (a[i] <= minv[i - 1]) {
      minv[i] = a[i];
      minq.clear();
    } else {
      while (minq.front() < i - k + 1) minq.pop_front();
      while (minv[minq.back()] >= a[i]) minq.pop_front();
      minv[i] = *min_element(a + minq.front(), a + minq.back() + 1);
    }
    minq.push_back(i);
  }
  for (int i = k - 1; i < n; i++) cout << minv[i] << " ";
  cout << endl;
  for (int i = k - 1; i < n; i++) cout << maxv[i] << " ";
  return 0;
}