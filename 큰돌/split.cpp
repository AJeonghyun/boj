#include <bits/stdc++.h>

vector<string> split(const string &input, string delimiter)
{
  vector<string> result;
  auto start = 0;
  auto end = input.find(delimiter);
  while (end != string::npos)
  {
    result.push_back(input.substr(start, end - start));
    start = end + delimiter.size();
    // start부터 delimiter를 찾기
    end = input.find(delimiter, start);
  }
  // 맨 마지막 추출
  result.push_back(input.substr(start));
  return result;
}

int main()
{
  string str = "apple,banana,orange,grape";
  vector<string> fruits = split(str, ",");
  for (const string &fruit : fruits)
  {
    cout << fruit << endl;
  }
  return 0;
}