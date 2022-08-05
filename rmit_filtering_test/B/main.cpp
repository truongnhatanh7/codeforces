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
int ar[400005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> t;
    while (t--) {
      cin >> n >> k;
      int ans = 0;

      for (int i = 0; i < k; i++) {
        cin >> ar[i];
        ans = max(ans, ar[i]);
      }

      sort(ar, ar + k);
      int sum = 0;
      for (int i = k-1; i >=0; i--) {
        if (n - ar[i] <= ans) {
          ++sum;ans -= n - ar[i];
        } else {
          if (ar[k - 1] - ar[i] < ans) {
            ++sum;
          }
          break;
        }
      }
      cout << sum << endl;
    }

    return 0;
}
