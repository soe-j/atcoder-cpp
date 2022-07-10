#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  float a, b, x;
  cin >> a >> b >> x;

  cout.precision(20);

  if (x > a * a * b / 2)
  {
    float tan0 = 2 * (b * a * a - x) / (a * a * a);
    float rad = atan(tan0);
    cout << rad * 180 / M_PI << endl;
  }
  else
  {
    float a2 = 2 * x / b / a;
    float tan0 = (a2 / b);
    float rad = atan(tan0);
    float theta = rad * 180 / M_PI;
    cout << 90 - theta << endl;
  }

  return 0;
}
