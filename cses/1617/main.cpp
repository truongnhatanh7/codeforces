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
#define modnum 1000000007
using namespace std;

int t;
int n;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  ll ans = 1;
  for (int i = 0; i < n; i++)
  {
    ans *= 2;
    ans %= modnum;
  }
  cout << ans << endl;

  return 0;
}
