#include <bits/stdc++.h>
using namespace std;
// 2559. 수열

int n,k,temp, psum[100001], ret = -10000004;
int main() {
  cin >> n >> k;

  for(int i=1; i<=n; i++) {
    cin >> temp; psum[i] = psum[i-1] + temp;
  }
  for(int i=k; i<=n; i++) {
    ret = max(ret,psum[i] - psum[i-k]);
  }
  cout << ret << "\n";
  return 0;
}
