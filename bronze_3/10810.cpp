#include <bits/stdc++.h>

using namespace std;
int arr[100];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m,i,j,k;

  cin >> n;

  cin >> m;

  for(int v=0; v<m; v++) {
    cin >> i;
    cin >> j;
    cin >> k;
    for(int q=i-1; q<j; q++) {
      arr[q] = k;
    }
  }

  for(int i=0; i<n; i++)
    cout << arr[i] << " ";
}

