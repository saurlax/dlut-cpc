#include <bits/stdc++.h>

using namespace std;

int N, M, T;
int SX, SY, FX, FY;
vector<vector<int>> maze;
vector<vector<bool>> visited;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y, int &count) {
  if (x == FX && y == FY) {
    count++;
    return;
  }

  visited[x][y] = true;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && maze[nx][ny] == 0 &&
        !visited[nx][ny]) {
      dfs(nx, ny, count);
    }
  }

  visited[x][y] = false;
}

int main() {
  cin >> N >> M >> T;
  cin >> SX >> SY >> FX >> FY;

  maze.resize(N + 1, vector<int>(M + 1, 0));
  visited.resize(N + 1, vector<bool>(M + 1, false));

  for (int i = 0; i < T; i++) {
    int x, y;
    cin >> x >> y;
    maze[x][y] = 1;
  }

  int count = 0;
  dfs(SX, SY, count);

  cout << count << endl;

  return 0;
}
