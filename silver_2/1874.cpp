#include <bits/stdc++.h>

using namespace std;
// const int MX = 1000005;
// int dat[MX];
// int pos = 0;

// void push(int x) {
//   dat[pos] = x;
//   pos++;
// }

// void pop() {
//   pos--;
// }
// int top() {
//   return dat[pos-1];
// }
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  stack<int> S;
  int n,x;
  int cnt = 1;
  cin >> n;
  string ans;

  while(n--) {
    cin >> x;
    while(cnt <= x) {
      S.push(cnt);
      cnt++;
      ans += "+\n";
    }
    if(S.top() != x) {
      cout << "NO\n";
      return 0;
    }
    S.pop();
    ans += "-\n";
  }
  cout << ans;
}