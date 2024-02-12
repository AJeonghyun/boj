#include <bits/stdc++.h>

int arr[30];
using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num,index;
  for (int i = 0; i < 28; i++)
  {
    cin >> num;
    arr[num - 1] = 1;
  }

  for(int j=0; j<30; j++) {
    if(arr[j] == 0)
      cout << j+1 << "\n";
  }
}
