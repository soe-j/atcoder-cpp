#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> balls(N);
  for (int i = 0; i < N; i++)
  {
    cin >> balls[i];
  }

  vector<long> counts(N + 1, 0);
  for (int i = 0; i < N; i++)
  {
    counts[balls[i]]++;
  }

  long total = 0;
  for (int i = 1; i <= N; i++)
  {
    total += counts[i] * (counts[i] - 1) / 2;
  }

  for (int i = 0; i < N; i++)
  {
    cout << total - (counts[balls[i]] - 1) << endl;
  }

  return 0;
}
