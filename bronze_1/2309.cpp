#include <bits/stdc++.h>
using namespace std;

int arr[9];
int num;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 9; i++)
  {
    cin >> arr[i];
    num += arr[i];
  }
  sort(arr, arr + 9);
  for (int j = 0; j < 8; j++)
  {
    for (int k = 1; k < 9; k++)
    {
      if (num - (arr[j] + arr[k]) == 100)
      {
        for (int i = 0; i < 9; i++)
        {
          if (i != k && i != j)
            cout << arr[i] << "\n";
        }
        return 0;
      }
    }
  }
  return 0;
}