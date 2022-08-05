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
    for (int i = 0; i < n; i++) {
      if (m.find(ar[i] - 1) == m.end()) { //not found
        m.insert(pll(ar[i], 0));
      } else {
        m.erase(ar[i] - 1);
        m.insert(pll(ar[i], 0));
      }
    }
    
    cout << m.size() << endl;


    return 0;
}