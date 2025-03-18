#include <bits/stdc++.h>
using namespace std;
// 1940. 주몽

int n,m,num;
int a[20000];
int flag;
int main() {
  cin >> n;
  cin >> m;

  for (int i=0; i<n; i++) {
    cin >> num;
    a[i] = num;
  }

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(m == a[i]+a[j]) {
        flag++;
      }
    }
  }

  cout << flag << "\n";
}