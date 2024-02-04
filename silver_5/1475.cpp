#include <bits/stdc++.h>

using namespace std;

int room_num[10];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int set = 0;

  cin >> n;

  string s = to_string(n);

  for (char c : s)
  {
    room_num[c - '0']++;
  }
  for(int i=0; i<10; i++){
    if(i==6 || i==9) continue;
    set = max(set,room_num[i]);
    }
    set = max(set, (room_num[6]+room_num[9]+1)/2);
    cout << set;
}
