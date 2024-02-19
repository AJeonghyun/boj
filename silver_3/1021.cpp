#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  deque<int> d;
  int n, m, x;
  int index;
  int num = 0;

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
    d.push_back(i);

  while (m--)
  {
    cin >> x;
    for (int i = 0; i < d.size(); i++)
    {
      if (d[i] == x)
      {
        index = i;
        break;
      }
    }
    if (index <= d.size() / 2)
    {
      for (int i = 0; i < index; i++)
      {
        d.push_back(d.front());
        d.pop_front();
        num++;
      }
      d.pop_front();
    }
    else
    {
      for (int i = 0; i < d.size() - index; i++)
      {
        d.push_front(d.back());
        d.pop_back();
        num++;
      }
      d.pop_front();
    }
  }
  cout << num;
}