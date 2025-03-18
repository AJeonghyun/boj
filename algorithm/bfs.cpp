#include <bits/stdc++.h>

using namespace std;

queue<int> q;

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n,m,x,y,sy,sx,ey,ex;
int a[104][104];
int visited[104][104];


int main() {
  cin >> n >> m;
  cin >> sy >> sx;
  cin >> ey >> ex;

  // map 생성
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> a[i][j];
    }
  }

  queue<pair<int,int>> q;
  visited[sy][sx] = 1;
  q.push({sy,sx});

  while(q.size()) {
    tie(y,x) = q.front(); q.pop();
    for(int i=0; i<4; i++) {
      // 4방향 탐색
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) continue;
      // 이미 방문한 정점은 다시 방문하지 않는다.
      if(visited[ny][nx]) continue;
      visited[ny][nx] = visited[y][x] + 1;
      q.push({ny,nx});
    }
  }

  cout << visited[ey][ex] << "\n";

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cout << visited[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}