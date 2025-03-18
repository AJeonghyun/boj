#include <bits/stdc++.h>
using namespace std;
// 9375. 패션왕 신해빈

int n,m;
string name,category;
int main() {
  cin >> n;
  while(n--) {
    map<string, int> mp;
    cin >> m;
    for(int i=0; i<m; i++) {
      cin >> name >> category;
      mp[category]++;
    }
    long long ret = 1;
    for(auto c : mp) {
      ret *= ((long long)c.second + 1);
    }
    ret--;
    cout << ret << "\n";
  }
  return 0;
}