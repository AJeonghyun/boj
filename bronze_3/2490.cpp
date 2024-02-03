#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int num[4] ={};
  int arr[3][5];
  for(int i=0; i<3; i++)
    for(int k=0; k<4; k++)
      cin >> arr[i][k];
  

    for(int i=0; i<3; i++)
      for(int k=0; k<4; k++)
        if(arr[i][k] == 0) {
          num[i]++;
        }
  

  for(int i=0; i<3; i++) {
    if(num[i]==0)
      cout << "E" << '\n';
    if(num[i]==1)
      cout << "A" << '\n';
    if(num[i]==2)
      cout << "B" << '\n';
    if(num[i]==3)
      cout << "C" << '\n';
    if(num[i]==4)
      cout << "D" << '\n';
  }

}
// #include <bits/stdc++.h>
// using namespace std;

// int result, input;
// string res = "DCBAE";

// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
    
//   for(int r = 0; r < 3; r++) {
//     result = 0;
//     for(int c = 0; c < 4; c++) {
//       cin >> input;
//       result += input;
//     }
//     cout << res[result] << '\n';
//   }
// }