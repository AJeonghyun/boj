#include <bits/stdc++.h>


using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m,i,j,k,temp;
  cin >> n;
  cin >> m;
  int arr[n];
  for(int c=0; c<n; c++) {
    arr[c] = c+1;
  }

  for(int v=0; v<m; v++) {
    cin >> i >> j;
    reverse(arr+(i-1),arr+j);
  }
  for(int q=0; q<n; q++)
    cout << arr[q] << " ";
}

