#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int num = 0;
  bool isGood = true;
  cin >> n;
  string s;
  while(n--) {
    cin >> s;
    stack<char> word;
    for(auto c:s) {
      if(word.empty()){
        word.push(c);
      }
      else {
        if(c==word.top()) {
          word.pop();
        }
        else {
          word.push(c);
        }
      }
  }
  if(!word.empty()) {
    isGood = false;
  }
  else {
    num++;
  }
}
cout << num;
}