#include <bits/stdc++.h>
using namespace std;

int n, m;
long long ans = 0;
int n_coe = 1, m_coe = 1;
struct Slice {
  bool direction;
  int cost;
} slices[4010];

bool cmp(Slice a, Slice b) { return a.cost > b.cost; }

int main() {
  cin >> n >> m;
  for (int i = 0; i < n - 1; i++) {
    slices[i].direction = 0;
    cin >> slices[i].cost;
  }
  for (int i = n - 1; i < n + m - 2; i++) {
    slices[i].direction = 1;
    cin >> slices[i].cost;
  }
  sort(slices, slices + n + m - 2, cmp);
  for (int i = 0; i < n + m - 2; i++) {
    if (slices[i].direction) {
      ans += slices[i].cost * n_coe;
      m_coe++;
    } else {
      ans += slices[i].cost * m_coe;
      n_coe++;
    }
  }
  cout << ans;
  return 0;
}