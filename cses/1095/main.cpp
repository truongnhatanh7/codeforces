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
#define pii pair<int , int>
#define pll pair<long long, long long>
#define MOD 1000000007

using namespace std;

int t;
int n;
string s;

ll solve(ll a, ll b) {
  if (b == 1) return a;
  if (b == 0) return 1;
  if (b % 2 != 0) ((solve(a, b / 2) % MOD) * (solve(a, (b + 1) / 2) % MOD)% MOD);
  return ((solve(a, b / 2) % MOD) * (solve(a, b / 2) % MOD) % MOD);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
      ll a, b;
      cin >>a >> b;
      cout << solve(a, b) << endl;
    }


    return 0;
}
