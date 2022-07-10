#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()

{
  string s;
  cin >> s;

  vector<char> stack;

  int size = s.size();
  for (int i = 0; i < size; i++)
  {
    char c = s.at(i);
    if (c == '0' || c == '1')
    {
      stack.push_back(c);
    }
    else if (!stack.empty())
    {
      stack.pop_back();
    }
  }

  string ans = "";
  int anssize = stack.size();
  for (int i = 0; i < anssize; i++)
  {
    ans.push_back(stack[i]);
  }
  cout << ans << endl;

  return 0;
}
