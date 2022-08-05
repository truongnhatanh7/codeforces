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

int t;
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }

    map<ll, ll> m;
    int curSeg = 0;
    int res = 0;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        ++cur;
      if (m.find(ar[i]) != m.end() && m[ar[i]] == curSeg) { // found overlapped
        m[ar[i]] = ++curSeg;
        res = max(cur, res);
        cur = 1;
      } else {
        m.insert(pll(ar[i], curSeg));
      }
    }

    res = max(res, cur);

    cout << res << endl;

    return 0;
}