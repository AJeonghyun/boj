#include <bits/stdc++.h>

int arr[26];
using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  for (int j = 0; j < 26; j++)
  {
    arr[j] = -1;
  }
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    if (arr[s[i] - 'a'] == -1)
      arr[s[i] - 'a'] = i;
  }

  for (int k = 0; k < 26; k++)
  {
    cout << arr[k] << " ";
  }
}
