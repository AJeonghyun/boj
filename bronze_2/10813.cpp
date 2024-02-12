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
  for(int q=0; q<n; q++) {
    arr[q] = q+1;
  }
  for(int v=0; v<m; v++) {
    cin >> i >> j;
    temp = arr[i-1];
    arr[i-1] = arr[j-1];
    arr[j-1] = temp;
  }
  
  for(int x=0; x<n; x++)
    cout << arr[x] << " ";

}

