#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  int n;
  int sum=0;
  cin >> n;
  cin >> s;

  for(int i=0; i<n; i++)
    sum += s[i] - '0';

  cout << sum;

}
