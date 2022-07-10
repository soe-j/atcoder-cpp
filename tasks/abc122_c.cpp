#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N;
  int Q;
  string S;
  cin >> N >> Q >> S;

  vector<vector<int>> questions(Q, {0, 0});
  for (int i = 0; i < Q; i++)
  {

    cin >> questions[i][0];
    cin >> questions[i][1];
  }

  vector<int> counts(N + 1, 0);
  for (int i = 1; i < N; i++)
  {
    if (S.at(i - 1) == 'A' && S.at(i) == 'C')
      counts[i] = counts[i - 1] + 1;
    else
      counts[i] = counts[i - 1];
  }

  for (int i = 0; i < Q; i++)
  {
    cout << counts[questions[i][1] - 1] - counts[questions[i][0] - 1] << endl;
  }

  return 0;
}
