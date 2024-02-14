#include <bits/stdc++.h>

using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  // list<int> L = {1, 2};
  // auto t = L.begin(); // t가 1을 가리키는 중
  // L.push_front(10);   // 10 1 2
  // cout << *t << '\n';
  // L.push_back(5); // 10 1 2 5
  // L.insert(t, 6); // 10 6 1 2 5
  // t++;            // t를 1칸 앞으로 전진, t가 2를 가리킴
  // t = L.erase(t); // 10 6 1 5, t가 5를 가리킴

  // cout << *t << '\n';

  // for (auto i : L)
  //   cout << i << ' ';

  string s;
  cin >> s;
  list<char> word;
  for (auto c : s)
    word.push_back(c);
  auto cursor = word.end();
  int q;
  cin >> q;
  while (q--)
  {
    char op;
    cin >> op;

    if (op == 'P')
    {
      char add;
      cin >> add;
      word.insert(cursor, add);
    }
    else if (op == 'L')
    {
      if (cursor != word.begin())
        cursor--;
    }
    else if (op == 'D')
    {
      if (cursor != word.end())
        cursor++;
    }
    else
    {
      if (cursor != word.begin())
      {
        cursor--;
        cursor = word.erase(cursor);
      }
    }
  }
  for (auto c : word) cout << c;
}
