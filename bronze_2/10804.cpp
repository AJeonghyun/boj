// #include <bits/stdc++.h>
// using namespace std;

// int num[21];
// int main(void)
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int a,b;

//   for(int i=1; i<=20; i++){
//     num[i] = i;
//   }

//   for(int i=1; i<=10; i++) {
//     cin >> a >> b;
//     reverse(num+a,num+b+1);
//   }

//   for(int i=1; i<=20; i++)
//     cout << num[i] << " ";

//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int num[21];

void reverse(int a, int b)
{
  if ((b - a + 1) % 2 == 0)
  {
    for (int i = 0; i < (b - a + 1) / 2; i++)
      swap(num[a + i], num[b - i]);
  }
  else if ((b - a + 1) % 2 != 0) {
    for (int i = 0; i < (b - a + 1) / 2; i++)
      swap(num[a + i], num[b - i]);
  }
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a[100], b[100];

  for (int i = 1; i <= 20; i++)
  {
    num[i] = i;
  }

  for (int i = 1; i <= 10; i++)
  {
    cin >> a[i] >> b[i];
    reverse(a[i], b[i]);
  }

  for(int i=1; i<=20; i++)
    cout << num[i] << " ";

  return 0;
}