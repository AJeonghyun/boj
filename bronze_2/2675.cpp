#include <bits/stdc++.h>


using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  int r;
  string s;

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> r;
    cin >> s;
    for(int k=0; k<s.length(); k++) {
      for(int j=0; j<r; j++) {
        cout << s[k];
      }
    }
    cout << "\n";
  }
}
