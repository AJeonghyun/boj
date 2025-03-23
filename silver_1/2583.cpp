#include <bits/stdc++.h>

using namespace std;

int ny, nx, n, m, k, lx, ly, rx, ry;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
vector<int> ret;
int a[104][104];
int visited[104][104];

int dfs(int y, int x)
{
  visited[y][x] = 1;
  int ret = 1;
  for (int i = 0; i < 4; i++)
  {
    ny = y + dy[i];
    nx = x + dx[i];
    if (ny < 0 || nx < 0 || ny >= m || nx >= n || visited[ny][nx] == 1)
      continue;
    if (a[ny][nx] == 1)
      continue;
    ret += dfs(ny, nx);
  }
  return ret;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> m >> n >> k;
  for (int i = 0; i < k; i++)
  {
    cin >> lx >> ly >> rx >> ry;
    for (int i = lx; i < rx; i++)
    {
      for (int j = ly; j < ry; j++)
      {
        a[j][i] = 1;
      }
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] != 1 && !visited[i][j])
      {
        ret.push_back(dfs(i, j));
      }
    }
  }
  sort(ret.begin(), ret.end());
  cout << ret.size() << "\n";
  for (int a : ret)
    cout << a << " ";
  return 0;
}