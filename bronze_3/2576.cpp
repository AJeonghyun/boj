#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[8] = {};
  int k = 0;
  int num = 0;
  int odd[8] = {};
  for (int i = 0; i < 7; i++)
    cin >> arr[i];

  for (int i = 0; i < 7; i++)
    if (arr[i] % 2 != 0)
    {
      num += arr[i];
      odd[k] = arr[i];
      k++;
    }
  sort(odd,odd+k);

  if (num != 0)
  {
    cout << num << "\n";
    cout << odd[0];
  }
  else
    cout << -1 << "\n";
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
  
//   int x, odd = 0, sum = 0, min = 100;

//   for (int i = 0; i < 7; i++) {
//     cin >> x;

//     if (x % 2 != 0) {
//       odd += 1;
//       sum += x;

//       if (x < min) {
//         min = x;
//       }
//     }
//   }

//   if (odd) cout << sum << "\n" << min;
//   else cout << "-1";
// }