#include <bits/stdc++.h>
using namespace std;

struct Farmer {
  int price, yield;
  bool operator<(const Farmer &a) const { return price < a.price; }
};
Farmer farmers[5000];

int main() {
  int n, m, cost = 0;
  cin >> n >> m;
  for (int i = 0; i < m; i++) cin >> farmers[i].price >> farmers[i].yield;

  sort(farmers, farmers + m);
  int i = 0;

  while (n > 0) {
    if (n > farmers[i].yield) {
      cost += farmers[i].price * farmers[i].yield;
      n -= farmers[i].yield;
    } else {
      cost += farmers[i].price * n;
      n = 0;
    }
    i++;
  }
  cout << cost;
  return 0;
}