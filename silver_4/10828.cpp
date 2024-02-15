#include <bits/stdc++.h>

using namespace std;
// const int MX = 1000005;
// int dat[MX];
// int pos = 0;

// void push(int x) {
//   dat[pos] = x;
//   pos++;
// }

// void pop() {
//   pos--;
// }
// int top() {
//   return dat[pos-1];
// }
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  stack<int> S;
  string s;
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> s;
    int x;
    if(s=="push") {
      cin >> x;
      S.push(x);
    }
    else if(s=="pop") {
      if(S.empty()) {
        cout << -1 << '\n';
      }
      else {
        cout << S.top() << '\n';
        S.pop();
      }
    }
    else if(s=="size") {
      cout << S.size() << '\n';
    }
    else if(s=="empty") {
      if(S.empty()) {
        cout << 1 << '\n';
      }
      else {
        cout << 0 << '\n';
      }
    }
    else {
      if(S.empty()){
        cout << -1 << '\n';
      }
      else {
        cout << S.top() << '\n';
      }
    }
  }
}