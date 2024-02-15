#include <bits/stdc++.h>

using namespace std;
#define ll long long
stack<int> s;
int n;
ll ans;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  ll h;
  for(int i=0; i<n; i++) {
    cin >> h;

    if(s.empty()) s.push(h);
    while(!s.empty() && s.top() <=h )
      s.pop();
    ans += s.size();
    s.push(h);
  }
  cout << ans;
}