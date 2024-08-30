#include <bits/stdc++.h>

int func2(int arr[], int N) {
  int temp[101] = {};
  for(int i=0; i<N; i++){
    if(temp[100-arr[i]] == 1)
      return 1;
    temp[arr[i]] = 1;
  }
  return 0;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[1000] = {};
  int num = 0;
  cin >> num;
  for(int i=0; i<num; i++) {
    cin >> arr[i];
  }
  cout << func2(arr,num);
}
