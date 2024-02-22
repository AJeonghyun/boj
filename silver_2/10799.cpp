#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  int len = 0;
  cin >> s;
  stack<char> word;

  for(int i=0; i<s.length(); i++) {
    if(s[i] == '(')
      word.push(s[i]);
    else {
      if(s[i-1] == '(') {
        word.pop();
        len+=word.size();
      }
      else {
        word.pop();
        len++;
      }
    }
  }
  cout << len << "\n";
}