#include <bits/stdc++.h>

using namespace std;

int word1[26];
int word2[26];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num = 0;
  int output = 0;

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  for (auto c : s1)
    word1[c - 'a']++;

  for (auto c : s2)
    word2[c - 'a']++;

  for (int i = 0; i < 26; i++)
  {
    if (word1[i] == word2[i])
      num += word1[i];
    else if (word1[i] > word2[i])
      num += word2[i];
    else if (word1[i] < word2[i])
      num += word1[i];
  }
  output = (s1.length() - num) + (s2.length() - num);

  cout << output;
}

// #include <bits/stdc++.h>
// using namespace std;

// int arr[2][26], res;
// string s1, s2;

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   cin>>s1>>s2;
//   for(char c : s1)
//     arr[0][c-'a']++;

//   for(char c : s2)
//     arr[1][c-'a']++;

//   for(int i=0; i<26; i++)
//     res += abs(arr[0][i]-arr[1][i]);

//   cout << res;
// }