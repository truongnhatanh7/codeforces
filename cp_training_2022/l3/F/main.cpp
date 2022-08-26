#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
#include <cmath>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define INTMAX 2147483647
#define INTMIN -2147483647

using namespace std;

int t;
int n;
int k;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;

  char ar[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> ar[i][j];
    }
  }

  int dp[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      dp[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (ar[i][j] == '*')
      {
        dp[i][j] = 0;
        continue;
      }
      if (i == 0 && j == 0)
      {
        dp[i][j] = 1;
      }
      else if (i == 0 && ar[i][j] != '*')
      {
        dp[i][j] = dp[i][j - 1];
      }
      else if (j == 0 && ar[i][j] != '*')
      {
        dp[i][j] = dp[i - 1][j];
      }
      else
      {
        dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000007;
      }
    }
  }

  cout << dp[n - 1][n - 1] % 1000000007 << endl;

  return 0;
}
