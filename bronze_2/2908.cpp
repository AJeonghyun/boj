#include <bits/stdc++.h>


using namespace std;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s1,s2;
  int a,b;

  cin >> s1 >> s2;

  reverse(s1.begin(),s1.end());
  reverse(s2.begin(),s2.end());

  a = stoi(s1);
  b = stoi(s2);

  if(a>b)
    cout << a;
  else
    cout << b;
  

}
