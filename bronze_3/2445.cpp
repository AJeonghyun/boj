#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int floor = n;
  int floor_2 = 1;

  for(int i=1; i<=n; i++) {
    for(int k=0; k<i; k++) {
      cout << "*";
    }
    for(int i=0; i<(2*floor)-2; i++) {
      cout << " ";
    }
    for(int j=0; j<i; j++){
      cout << "*";
    }
    floor--;
    cout << "\n";
  }

  for(int i=1; i<=n-1; i++) {
    for(int j=0; j<n-i; j++) {
      cout << "*";
    }
    for(int k=0; k<2*floor_2; k++) {
      cout << " ";
    }
    for(int l=0; l<n-i; l++) {
      cout << "*";
    }
    floor_2++;
    cout << "\n";
  }
}