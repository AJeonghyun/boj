#include <bits/stdc++.h>

int k=3,n=5;
void combi(int start, vector<int> b) {
  if (b.size()==k) {
    return;
  }
  for(int i=start+1; i<n; i++) {
    b.push_back(i);
    combi(i,b);
    b.pop_back();
  }
}