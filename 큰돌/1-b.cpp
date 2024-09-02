#include <bits/stdc++.h>
using namespace std;
// 10808. 알파벳 개수
int cnt[26];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string str;
  cin >> str;

  for(char s:str)
    cnt[s-'a']++;
  for(int i=0; i<26; i++)
    cout << cnt[i] << ' ';
}
