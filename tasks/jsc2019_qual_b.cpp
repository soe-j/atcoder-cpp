#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int mod = pow(10, 9) + 7;

int main()
{
  int N;
  long K;
  cin >> N >> K;

  vector<int> a(N, 0);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }

  vector<int> answer(N, 0);
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      if (a[i] > a[j])
      {
        answer[i]++;
      }
    }

  }

  cout << endl;

  vector<int> diff(N, 0);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (a[i] > a[j])
      {
        diff[i]++;
      }
    }


  }

  int finalAnswer = 0;
  for (int i = 0; i < N; i++)
  {
    // answer[i] * K + diff[i] * (1 + 2 + ... K-1)
    // answer[i] * K  +  diff[i] * K * (K - 1) / 2
    int modAnswer = (answer[i] * K + (diff[i] * K * (K - 1)) / 2) % mod;

    // 最初の1数列しか計算してないので、残りの K - 1 必要
    finalAnswer = (finalAnswer + modAnswer) % mod;
  }

  // cout << endl
  cout << finalAnswer;
  return 0;
}

/*
  10 9 8 7 5 6 3 4 2 1
a= 9 8 7 6 4 4 2 2 1 0

  10 9 8 7 5 6 3 4 2 1 10 9 8 7 5 6 3 4 2 1
  1816141210 8 4 5 2 0  9 8 7 6 4 4 2 2 1 0 = finalAnswer

  .................... diff=3 (k - 1) k=4
  .................... diff=2
  1816141210 8 4 5 2 0 diff=1
   9 8 7 6 4 4 2 2 1 0 diff=0

d= 9 8 7 6 5 4 2 3 1 0 = diff

*/
