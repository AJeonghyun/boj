#include<bits/stdc++.h>

using namespace std;


vector<int> adj[104];
int visited[104];

void inOrder(int here) {
  if(visited[here] == 0 ){
    // 자식의 노드가 1개일때 왼쪽 -> 자신
    if(adj[here].size() == 1){
      inOrder(adj[here][0]);
      visited[here] = 1;
      cout << here << ' ';
      }
    // 자식의 노드가 2개일때는 왼쪽 -> 자신 -> 오른쪽 
    else if(adj[here].size() == 2) {
      inOrder(adj[here][0]);
      visited[here] = 1;
      cout << here << ' ';
      inOrder(adj[here][1]);
    }
    // 자식의 노드가 없을때는 자신
    else {
    visited[here] = 1;
    cout << here << ' ';
  }
  }

}



int main() {
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(4);
  adj[2].push_back(5);
  int root = 1;
  cout << "\n 트리순회 : inOrder \n";

  // memset() : 메모리의 값을 원하는 크기만큼 특정 값으로 세팅할 수 있는 함수
  inOrder(root);
  return 0;
}