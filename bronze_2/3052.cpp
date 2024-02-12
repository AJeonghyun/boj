#include <bits/stdc++.h>
int arr[1000];
using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int num=0;
  for (int i = 0; i < 10; i++)
  {
    cin >> n;
    arr[n%42] = 1;
  }

  for(int i=0; i<1000; i++) {
    if(arr[i] == 1)
      num++;
  }

  cout << num;
}
