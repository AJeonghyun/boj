#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
int n, c, a[1004];
vector<pair<int, int>> v;
map<int, int> mp, mp_first;
bool cmp(pair<int, int> a, pair<int, int> b)
{
  // 빈도수가 같으면
  if (a.first == b.first)
  {
    // 먼저 입력된 숫자가 앞으로
    return mp_first[a.second] < mp_first[b.second];
  }
  // 빈도수가 다르면 빈도가 높은 것이 앞으로
  return a.first > b.first;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cin >> n >> c;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    // 등장 횟수 카운트
    mp[a[i]]++;
    if (mp_first[a[i]] == 0)
      // 처음 등장한 위치 기록 (1-based)
      mp_first[a[i]] = i + 1;
  }
  for (auto it : mp)
  {
    v.push_back({it.second, it.first});
  }
  sort(v.begin(), v.end(), cmp);
  for (auto i : v)
  {
    for (int j = 0; j < i.first; j++)
    {
      cout << i.second << " ";
    }
  }

  return 0;
}
