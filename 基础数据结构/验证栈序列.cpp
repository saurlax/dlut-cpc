#include <bits/stdc++.h>
using namespace std;

int q, n;
int arr[100010], pushed[100010], poped[100010];

int main() {
  for (cin >> q; q; q--) {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> pushed[i];
    for (int i = 0; i < n; i++) cin >> poped[i];
    int top = -1, push_idx = 0, pop_idx = 0;
    while (push_idx < n) {
      arr[++top] = pushed[push_idx++];
      while (arr[top] == poped[pop_idx] && top >= 0) {
        top--;
        pop_idx++;
      }
    }
    if (pop_idx == n)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}