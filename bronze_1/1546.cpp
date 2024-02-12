#include <bits/stdc++.h>

double arr[1001];
using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int m, n;
  double score = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  m = *max_element(arr, arr + n);

  for (int k = 0; k < n; k++)
  {
    score += ((arr[k]/m)*100);

  }

  cout << score / n;

}
