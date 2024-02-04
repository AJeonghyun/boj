#include <bits/stdc++.h>

using namespace std;

int arr[10000001];
bool occur[20000001];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int x;
  int num = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cin >> x;

  for (int i = 0; i < n; i++)
  {
    if (x - arr[i] > 0 && occur[x - arr[i]])
      num++;
    occur[arr[i]] = true;
  }

  cout << num;
}
