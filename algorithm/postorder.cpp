#include<bits/stdc++.h>
using namespace std;

vector<int> adj[104];
int visited[104];
void postOrder(int here) {
  if(visited[here]==0) {
    // 자식 노드가 1개일떄
    if(adj[here].size() == 1) postOrder(adj[here][0]);
    if(adj[here].size() == 2) {
      postOrder(adj[here][0]);
      postOrder(adj[here][1]);
      }
      visited[here] = 1;
      cout << here << ' ';
  }
}


int main() {
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(4);
  adj[2].push_back(5);
  int root = 1;
  cout << "\n 트리순회 : postOrder \n";

  // memset() : 메모리의 값을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수
  postOrder(root); memset(visited,0,sizeof(visited));
  
  return 0;
}