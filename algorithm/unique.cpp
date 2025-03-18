#include <bits/stdc++.h>
using namespace std;
// vector<int> v;
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     v.push_back(i);
//     v.push_back(i);
//   }
//   for (int i : v)
//     cout << i << " ";
//   cout << '\n';
//   // 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
//   auto it = unique(v.begin(), v.end());
//   cout << it - v.begin() << '\n';
//   // 앞에서 부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
//   for (int i : v)
//     cout << i << " ";
//   cout << '\n';
//   return 0;
// }
/*
1122334455
5
1234534455
*/

// vector<int> v{1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9};
// int main()
// {
//   auto it = unique(v.begin(), v.end());
//   for (int i : v)
//     cout << i << " ";
//   cout << '\n';
//   return 0;
// }
// /* 12356789789 */

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  vector<int> s2{4, 3, 3, 5, 1, 2, 3};
  sort(s2.begin(), s2.end());
  s2.erase(unique(s2.begin(), s2.end()), s2.end());
  for (int i : s2)
    cout << i << " ";
  return 0;
}
/*
unique -> 4 3 5 1 2 3 3
erase -> 4 3 5 1 2 3
sort -> 1 2 3 4 5
*/