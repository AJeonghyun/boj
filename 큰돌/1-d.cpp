#include <bits/stdc++.h>
using namespace std;
// 10988. 팰린드롬인지 확인하기

int main() {
  string str;

  cin >> str;
  string rev = str;
  reverse(str.begin(),str.end());

  if (rev == str) {
    cout << "1" << "\n";
  }
  else 
    cout << "0" << "\n";
  return 0;
}