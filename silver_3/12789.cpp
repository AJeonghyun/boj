#include <bits/stdc++.h>

using namespace std;
stack<int> s;
int arr[1002];
int num = 1;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == num)
    {
      num++;
    }
    else
    {
      s.push(arr[i]);
    }
    while (!s.empty() && s.top() == num)
    {
      s.pop();
      num++;
    }
  }
  if (s.empty())
  {
    cout << "Nice";
  }
  else
  {
    cout << "Sad";
  }
}