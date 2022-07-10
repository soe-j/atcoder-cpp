#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, A, B, C, D;
string cells;

bool hasSafeArea()
{
  for (int i = A - 1; i < C - 2; i++)
  {
    if (cells[i] == '.' && cells[i + 1] == '.' && cells[i + 2] == '.')
    {
      if (B - 1 <= i + 1 && i + 1 <= D - 1)
      {
        return true;
      }
    }
  }

  return false;
}

bool solve()
{
  if (C > D)
  {
    if (!hasSafeArea())
      return false;
  }

  // 岩2つないこと
  for (int i = A - 1; i < C - 1; i++)
  {
    if (cells[i] == '#' && cells[i + 1] == '#')
      return false;
  }

  for (int i = B - 1; i < D - 1; i++)
  {
    if (cells[i] == '#' && cells[i + 1] == '#')
      return false;
  }

  return true;
}

int main()
{
  cin >> N >> A >> B >> C >> D;
  cin >> cells;
  cout << (solve() ? "Yes" : "No") << endl;
  return 0;
}
