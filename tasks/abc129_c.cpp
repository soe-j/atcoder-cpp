#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  // 壊れてたら true
  vector<bool> stairs(N, false);
  vector<int> answers(N + 1, 0);

  for (int i = 0; i < M; i++)
  {
    int a;
    cin >> a;
    stairs[a] = true;
  }

  for (int i = 0; i <= N; i++)
  {
    if (stairs[i])
      continue;

    if (i == 0 || i == 1)
    {
      answers[i] = 1;
      continue;
    }

    answers[i] = (answers[i - 2] + answers[i - 1]) % 1000000007;
  }

  cout << answers[N];

  return 0;
}
