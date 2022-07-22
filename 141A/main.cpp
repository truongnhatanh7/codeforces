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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b, c;
    cin >> a >> b >> c;
    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (d.length() != c.length()) {
      cout << "NO" << endl;
      return 0;
    }

    for (int i = 0; i < d.length(); i++) {
      if (d[i] != c[i]) {
        cout << "NO" << endl;
      return 0;
      }
    }

    cout << "YES" << endl;
    return 0;
}
