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

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>

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
  ll mx = 0;
  ll s = 0;
  for (int i = 0; i < n; i++)
  {
    ll temp;
    cin >> temp;
    mx = max(mx, temp);
    s += temp;
  }

  cout << max(2 * mx, s) << endl;

  return 0;
}
