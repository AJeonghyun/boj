#include <bits/stdc++.h>

using namespace std;
int arr[10];
int max_num = 0;
int index_num;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 9; i++)
  {
    cin >> arr[i];
  }

  for (int k = 0; k < 10; k++)
  {
    if (max_num < arr[k])
    {
      max_num = arr[k];
      index_num = k;
    }
  }

  cout << max_num << "\n" << index_num+1;
}

/*
max_element 함수를 이용한 풀이
*/

// #include <bits/stdc++.h>
// using namespace std;

// int a[9];
// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   for(int i = 0; i < 9; i++) cin >> a[i];
//   cout << *max_element(a, a+9) << '\n';
//   cout << max_element(a, a+9) - a + 1;
// }

