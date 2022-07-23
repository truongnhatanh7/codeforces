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
    sort(ar, ar + n);
    ll curSum = 0;

    for (int i = 0; i < n; i++) {
      if (curSum + 1 < ar[i]) break;
      curSum += ar[i];
    }
    
    cout << curSum + 1 << endl;


    return 0;
}