#include <bits/stdc++.h>

using namespace std;

int room_num[10];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int set;

  cin >> n;

  string s = to_string(n);

  for (char c : s)
  {
      room_num[c - '0']++;
  }

  room_num[5] /= 2;
  room_num[9] /= 2;
  cout << *max_element(room_num,room_num+10);
}