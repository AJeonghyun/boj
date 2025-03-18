#include <bits/stdc++.h>
using namespace std;
// 1620. 나는야 포켓몬 마스터 이다솜

string str,s;
map<string, int> map1;
map<int, string> map2;

int n,m;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cin >> n >> m;
  for(int i=1; i<=n; i++) {
    cin >> str;
    map1[str] = i;
    map2[i] = str;

  }
  for(int j=0; j<m; j++) {
    cin >> s;
    // 문자열일때
    if(atoi(s.c_str()) == 0) {
      cout << map1[s] << "\n";
    } 
    // 숫자일때
    else {
      cout << map2[atoi(s.c_str())] << "\n";
    }
  }

}