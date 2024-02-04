#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;

  cin >> n;


  while(n > 0) {
    int arr[26] = {};
    string arr_1,arr_2;
    cin >> arr_1 >> arr_2;

    for(auto c:arr_1) arr[c-'a']++;
    for(auto c:arr_2) arr[c-'a']--;

    bool possible = true;

    for(int i=0; i<26; i++)
      if(arr[i] != 0)
        possible = false;
    
    if(possible)
      cout << "Possible" << "\n";
    else
      cout << "Impossible" << "\n";
    n--;
  }



}
