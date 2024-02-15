#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
stack<pair<int, int>> tower;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int height;
    cin >> height;
    while (!tower.empty())
    {
      if (height < tower.top().Y)
      {
        cout << tower.top().X << " ";
        break;
      }
      tower.pop();
    }
    if(tower.empty()) {
      cout << 0 << " ";
    }
    tower.push({i, height});
  }
}