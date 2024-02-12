#include <bits/stdc++.h>


using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  int n=0;
  getline(cin,s);

  stringstream ss(s);
  ss.str(s);

  string word;

  while(ss >> word){
    n++;
  }
  cout << n;
}
