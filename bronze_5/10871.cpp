#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int index = 0;
  int target = 0;
  cin >> index >> target;

  int arr[index];
  // 배열에 넣기
  for (int i = 0; i < index; i++)
    cin >> arr[i];

  // target 보다 작은 수 찾기
  for (int i=0; i<index; i++) {
    if(arr[i] < target)
      cout << arr[i] << ' ';
  }
}