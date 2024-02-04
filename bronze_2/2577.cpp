#include <bits/stdc++.h>

using namespace std;


int arr[4];
int bowl[10];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num = 1;

  for(int i=0; i<3; i++){
    cin >> arr[i];
    num *= arr[i];
  }
  string number = to_string(num);

  for(char c:number) {
    bowl[c-'0']++;
  }
  for(int i=0; i<10; i++)
    cout << bowl[i] << "\n";
}