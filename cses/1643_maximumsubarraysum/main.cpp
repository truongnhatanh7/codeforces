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

#define ll long long
#define pii pair<int , int>
#define pll pair<long long, long long>

using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ll ar[n];
    ll dp[n];
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }

    ll res = ar[0];
    dp[0] = ar[0];

    for (int i = 1; i < n;  i++) {
      dp[i] = max(ar[i] + dp[i  - 1], ar[i]);
      res = max(res, dp[i]);
    }

    cout << res << endl;



    return 0;
}