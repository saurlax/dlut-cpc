#include <bits/stdc++.h>
using namespace std;

bool visited[102][102];
char a[103][103], k[9] = " yizhong";
int x[9] = {0, 1, 0, 1, -1, 0, -1, 1, -1};
int y[9] = {0, 0, 1, 1, 0, -1, -1, -1, 1};
int coord[10000][2];

bool find(int i, int j, int dx, int dy, int next) {
  if (next >= 8) {
    visited[i][j] = true;
    return 1;
  }
  if (a[i + dx][j + dy] == k[next])
    if (find(i + dx, j + dy, dx, dy, next + 1)) {
      visited[i][j] = true;
      return 1;
    }
  return 0;
}

int main() {
  int n, i, j, num = 0;
  cin >> n;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      char c;
      cin >> c;
      if (c == 'y') {
        coord[++num][0] = i;
        coord[num][1] = j;
      }
      a[i][j] = c;
    }
  }
  while (num) {
    i = coord[num][0];
    j = coord[num][1];
    for (int idx = 1; idx <= 8; idx++) {
      if (a[i + x[idx]][j + y[idx]] == 'i') {
        if (find(i + x[idx], j + y[idx], x[idx], y[idx], 3)) {
          visited[i][j] = 1;
        }
      }
    }
    num--;
  }
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (visited[i][j]) {
        cout << a[i][j];
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
  return 0;
}