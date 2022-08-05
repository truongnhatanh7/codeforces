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
    int ar[n];
    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }

    int res = 0;
    for (int i = 1; i < n; i++) {
      if (ar[i] < ar[i - 1]) {
        res += ar[i - 1] - ar[i]; 
        ar[i] = ar[i - 1] - ar[i]; 
      }
    }

    cout << res << endl;
    return 0;
}
