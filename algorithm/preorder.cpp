#include<bits/stdc++.h>
using namespace std;

vector<int> adj[104];
int visited[104];

void preOrder(int here) {
  if(visited[here]==0) {
    // 자신의 노드부터 먼저
    visited[here] = 1;
    cout << here << ' ';
    // 자식의 노드가 1개일때 왼쪽부터
    if(adj[here].size() == 1) preOrder(adj[here][0]);
    // 자식의 노드가 2개일때 왼쪽 -> 오른쪽 자식 순서대로
    if(adj[here].size() == 2) {
      preOrder(adj[here][0]);
      preOrder(adj[here][1]);
    }
  }
}


int main() {
    adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(4);
  adj[2].push_back(5);
  int root = 1;
  cout << "\n 트리순회 : preOrder \n";

  // memset() : 메모리의 값을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수
  preOrder(root); memset(visited,0,sizeof(visited));
  
  return 0;
}