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

    ll x;
    cin >> n >> x;
    ll ar[n];
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }

    map<ll , ll> m;
    for (int i = 0; i < n; i++) {

      if (m.find(x - ar[i]) != m.end()) {
        cout << m[x - ar[i]] + 1<< " " << i + 1<< endl;
        return 0;
      }
      m.insert(pll(ar[i], i));
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}