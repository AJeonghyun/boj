#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (1)
  {
    string x;
    getline(cin, x);
    if (x == ".")
    {
      break;
    }
    stack<char> s;
    bool flag = false;
    for (int i = 0; i < x.length(); i++)
    {
      if ((x[i] == '[') || (x[i] == '('))
      {
        s.push(x[i]);
      }
      else if (x[i] == ']')
      {
        if (!s.empty() && s.top() == '[')
          s.pop();
        else
        {
          {
            flag = true;
            break;
          }
        }
      }
      else if (x[i] == ')')
      {
        if (!s.empty() && s.top() == '(')
          s.pop();
        else
        {
          flag = true;
          break;
        }
      }
    }
    if (flag==false && s.empty())
    {
      cout << "yes"
           << "\n";
    }
    else
    {
      cout << "no"
           << "\n";
    }
  }
}