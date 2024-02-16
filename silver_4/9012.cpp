#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  string x;

  cin >> n;

  while(n--) {
    cin >> x;
    stack<char> s;
    for(int i=0; i<x.length(); i++) {
      if(s.empty()) {
        s.push(x[i]);
      }
      else {
        if(s.top()=='(' && x[i] == ')') {
          s.pop();
        }
        else {
          s.push(x[i]);
        }
      }
    }
    if(s.empty()) {
      cout << "YES" << "\n";
    }
    else {
      cout << "NO" << "\n";
    }
  }
}