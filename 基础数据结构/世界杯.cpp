#include <bits/stdc++.h>
using namespace std;

int p[4], q, temp, ans;
priority_queue<int> player[4];
int format[19][3];

int main() {
  for (int i = 0; i < 4; i++) cin >> p[i];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < p[i]; j++) {
      cin >> temp;
      player[i].push(temp);
    }
  }
  cin >> q;
  for (int i = 0; i < q; i++) {
    for (int j = 0; j < 4; j++) {
      if (j == 0) {
        ans = player[j].top();
        player[j].pop();
      } else {
        cin >> temp;
        for (int k = 0; k < temp; k++) {
          ans += player[j].top();
          player[j].pop();
        }
      }
    }
    printf("%.2lf\n", ans / 11.0);
  }
  return 0;
}