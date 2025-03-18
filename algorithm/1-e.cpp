#include <bits/stdc++.h>
using namespace std;
// 1159. 농구 경기

int n;
int cnt;
string str,ret;
int a[30];
int main() {
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> str;
    a[str[0]-'a']++;
  }

  for(int i=0; i<30; i++) {
    if(a[i]>=5) {
      // cout << char(i+'a');
      ret += (i+'a');
      cnt++;
    }
  }
  if (cnt == 0) {
    cout << "PREDAJA" << "\n";
  }
  else cout << ret << "\n";
  return 0;
}