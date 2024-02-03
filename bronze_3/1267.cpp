#include <bits/stdc++.h>
using namespace std;

int m;
int y;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {
    m+=((arr[i]/60)+1)*15;
  }

  for (int k = 0; k < n; k++)
  {
    y+=((arr[k]/30)+1)*10;
  }

  if (m < y)
  {
    cout << "M" << " " << m;
  }
  else if (m > y)
  {
    cout << "Y" << " " << y;
  }
  else cout << "Y M " << y;
  return 0;
}