#include <bits/stdc++.h>
using namespace std;
// 3986. 좋은 단어


int n,cnt = 0;
string str;
int main() {
  cin >> n;
  while(n--) {
    cin >> str;
    stack<char> s;
    for(auto c:str) {
      if(s.empty()) {
        s.push(c);
      }
      else {
        if(s.size() && c == s.top() ) {
          s.pop();
        }
        else {
          s.push(c);
        }
      }
    }
    if (s.empty()){
      cnt++;
    }
  }
  cout << cnt << "\n";
}