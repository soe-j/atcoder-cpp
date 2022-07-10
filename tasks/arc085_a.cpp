#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N;
  int M;

  cin >> N >> M;

  int t = 1900 * M + 100 * (N - M);
  int c = pow(2, M);

  cout << t * c << endl;

  return 0;
}
