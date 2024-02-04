#include <bits/stdc++.h>

using namespace std;


int female[7] = {};
int male[7] = {};
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);


  int num;
  int set;
  int sex;
  int grade;
  int room_female = 0;
  int room_male = 0;

  cin >> num >> set;

  for(int i=0; i<num; i++){
    cin >> sex >> grade;
      if(sex==0) {
        female[grade-1]++;
      }
      else if(sex==1) {
        male[grade-1]++;
      }
    }

  for(int i=0; i<6; i++) {
    if (female[i] == 0) continue;
    if((female[i] < set) || (female[i] == set))
      room_female++;
    if((female[i] > set) && (female[i] % set != 0)){
      room_female +=(female[i]/set)+1;
    }
    if((female[i] > set) && (female[i] % set == 0)){
      room_female +=(female[i]/set);
    }
  }

  for(int i=0; i<6; i++) {
    if (male[i] == 0) continue;
    if((male[i] < set) || (male[i] == set))
      room_male++;
    else if((male[i] > set) && (male[i] % set != 0)){
      room_male += (male[i]/set)+1;
    }
    else if((male[i] > set) && (male[i] % set == 0)){
      room_male += (male[i]/set);
    }
    

  }
  
  cout << room_female+room_male;
  
}
