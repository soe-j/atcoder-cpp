#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  long N;
  long P;

  cin >> N >> P;

  if (N == 1)
  {
    cout << P << endl;
    return 0;
  }

  long q = P;
  int count = 0;
  int i = 2;
  int ans = 1;

  /*
  1 .. √n .. n
  1 .. √n で割れなかったら、√n .. n まででは割れないはず
  */
  int root = pow(P, 0.5);
  while (q > 1 && i <= root)
  {
    if (q % i == 0)
    {
      q = q / i;
      count++;
    }
    else
    {
      ans = ans * pow(i, (count / N));
      i++;
      count = 0;
    }
  }

  if (count >= N)
    ans = ans * pow(i, (count / N));

  cout << ans << endl;

  return 0;
}
