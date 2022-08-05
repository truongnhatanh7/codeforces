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

using namespace std;

int t;
int n;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
      int k;
      cin >> n >> k;
      ll a[n];
      for (int i = 0; i < n; i++) {
        cin >> a[i];
      }
      ll b[n];

      for (int i = 0; i < n; i++) {
        cin >> b[i];
      }
      sort (a, a + n);
      sort(b, b + n);
      ll lowA = 0;
      ll maxB = n - 1;

      while (k--) {
        if (a[lowA] < b[maxB]) {
          ll temp = a[lowA];
          a[lowA] = b[maxB];
          b[maxB] = temp;
          lowA++;
          maxB--;
        } else {
          break;
        }
      }

      ll res = 0;
      for (int i = 0; i < n; i++) {
        res += a[i];
      }
      cout << res << endl;

    }

    return 0;
}
