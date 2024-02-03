#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[6];
  int average = 0;
  for(int i=0; i<5; i++)
    cin >> arr[i];
  
  average =( arr[0] + arr[1] + arr[2] + arr[3] + arr[4] )/ 5;
  sort(arr,arr+5);
  cout << average << "\n" << arr[2];

}