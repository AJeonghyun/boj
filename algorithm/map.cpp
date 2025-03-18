#include <bits/stdc++.h>
using namespace std;

// 맵과 그래프

const int n = 3;
int a[n][n], visited[n][n];

// 4방향
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

// 8방향
// const int dy[] = {-1,-1,0,1,1,1,0,-1};
// const int dx[] = {0,1,1,1,0,-1,-1,-1};

void go(int y,int x) {
  visited[y][x] = 1;
  cout << y << " : " << x << "\n";
  for(int i=0; i<4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    // 오버플로우, 언더플로우 체크  
    if(ny < 0 || ny >= n || nx < 0 || ny >= n) continue;
    if(a[ny][nx]==0) continue;
    if(visited[ny][nx]==0) continue;
  }
}

int main() {
  // int y = 0, x = 0;
  // for(int i=0; i<4; i++) {
  //   int ny = y + dy[i];
  //   int nx = x + dx[i];
  //   cout << ny << " : " << nx << "\n";
  // }
}