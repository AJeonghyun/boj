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
  int n,x;
  int sum = 0;
  cin >> n;
  

  for(int i=0; i<n; i++) {
    cin >> x;
    if(x==0) {
      if(!S.empty()) {
        S.pop();
      }
    }
    else {
      S.push(x);
    }
  }

  while(!S.empty()) {
    sum += S.top();
    S.pop();
  }
  cout << sum;
}