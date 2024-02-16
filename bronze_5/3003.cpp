#include <bits/stdc++.h>

using namespace std;
int input[6];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[6] = {1,1,2,2,2,8};
  for(int i=0; i<6; i++) {
    cin >> input[i];
    cout << arr[i] - input[i] << " ";
  }
}