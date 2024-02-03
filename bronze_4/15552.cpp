#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a[1000000];
  int b[1000000];
  int n;
  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i] >> b[i];
  

  for(int i=0; i<n; i++)
    cout << a[i]+b[i] << "\n";
}