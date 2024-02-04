#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  int v;
  int num = 0;
  cin >> n;

  int arr[n];

  for(int i=0; i<n; i++)
    cin >> arr[i];

  cin >> v;

  for(int i=0; i<n; i++) {
    if(arr[i] == v)
      num++;
  }

  cout << num;

}
