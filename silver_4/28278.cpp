#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  stack<int> s;
  int n,x;
  int c;
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> x;
    if(x==1) {
      cin >> c;
      s.push(c);
    }
    else if (x==2) {
      if(s.empty()) {
        cout << -1 << "\n";
      }
      else if(!s.empty()){
        cout << s.top() << "\n";
        s.pop();
      }
    }
    else if (x==3) {
      cout << s.size() << "\n";
    }
    else if (x==4) {
      if(s.empty()) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
    else {
      if(s.empty()) cout << -1 << "\n";
      else {
        cout << s.top() << "\n";
      }
    }
  }
}