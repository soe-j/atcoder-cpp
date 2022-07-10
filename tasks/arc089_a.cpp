#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool resolve()

{
  int N;
  cin >> N;
  vector<vector<int>> points(N + 1, vector<int>(3));

  points[0] = vector<int>(3, 0);

  for (int i = 1; i < N + 1; i++)
  {
    cin >> points[i][0] >> points[i][1] >> points[i][2];
  }

  for (int i = 1; i < N + 1; i++)
  {
    int t = points[i][0] - points[i - 1][0];
    int x = abs(points[i][1] - points[i - 1][1]);
    int y = abs(points[i][2] - points[i - 1][2]);

    if (t < x + y)
      return false;

    if ((t + x + y) % 2 == 1)
      return false;
  }

  return true;
}

int main()
{
  cout << (resolve() ? "Yes" : "No") << endl;
  return 0;
}
