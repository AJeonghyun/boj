#include <bits/stdc++.h>

using namespace std;
int n, m, j, l, r, temp, ret;

int main()
{
  cin >> n >> m;
  cin >> j;
  l = 1;
  for (int i = 0; i < j; i++)
  {
    cin >> temp;
    r = l + m - 1;
    if (temp >= l && temp <= r)
      continue;
    else
    {
      if (temp < l)
      {
        ret += (l - temp);
        l = temp;
      }
      else
      {
        ret += (temp - r);
        l += (temp - r);
      }
    }
  }
  cout << ret << "\n";
  return 0;
}