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

    cin >> n;
    ll ar[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
      sum += ar[i];
    }
    sum = sum/2;
    sort(ar, ar + n);
    ll cur = 0;
    ll cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
      cur += ar[i];
      ++cnt;
      if (cur > sum) break;
    }

    cout << cnt << endl;

    return 0;
}
