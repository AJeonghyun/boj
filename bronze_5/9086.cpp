#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
  cin >> s;
  cout << s.front() << s.back() << "\n";
  }

}
