#include <bits/stdc++.h>

using namespace std;
string a;
int lcnt, vcnt;
bool isVowel(int idx)
{
  return (idx == 'a' || idx == 'e' || idx == 'u' || idx == 'i' || idx == 'o');
}

int main()
{
  while (true)
  {
    cin >> a;
    if (a == "end")
      break;
    lcnt = vcnt = 0;
    bool flag = 0;
    bool is_include_v = 0;
    int prev = -1;
    for (int i = 0; i < a.size(); i++)
    {
      int idx = a[i];
      if (isVowel(idx))
      {
        lcnt++;
        vcnt = 0;
        is_include_v = 1;
      }
      else
      {
        vcnt++;
        lcnt = 0;
      }
      if (lcnt == 3 || vcnt == 3)
        flag = 1;
      if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o'))
      {
        flag = 1;
      }
      prev = idx;
    }
    if (is_include_v == 0)
      flag = 1;
    if (flag)
      cout << '<' << a << '>' << " is not acceptable.\n";
    else
      cout << '<' << a << '>' << " is acceptable.\n";
  }
  return 0;
}