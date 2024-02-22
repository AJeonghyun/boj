#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  stack<char> word;
  string s;
  int sum = 0;
  int num = 1;

  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '(')
    {
      num *= 2;
      word.push(s[i]);
    }
    else if (s[i] == '[')
    {
      num *= 3;
      word.push(s[i]);
    }
    else if (s[i] == ')')
    {
      if (word.empty() || word.top() != '(')
      {
        cout << 0;
        return 0;
      }
      if (s[i - 1] == '(')
        sum += num;
      word.pop();
      num /= 2;
    }
    else
    {
      if (word.empty() || word.top() != '[')
      {
        cout << 0;
        return 0;
      }
      if (s[i - 1] == '[')
        sum += num;
      word.pop();
      num /= 3;
    }
  }
  if (word.empty())
    cout << sum;
  else
    cout << 0;
}