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
    vector<pll> v(n);
    ll a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }


    sort(v.begin(), v.end());
    v.push_back(make_pair(0,0));

    ll prev = v[0].second;
    int res = 0;
    int cur = 0;
    for (int i = 0; i <= n; i++) {
        // cout << v[i].first << " " << cur<< endl;
        if (v[i].first > prev || i == n) {
            res = max(res, cur);
            cur = 1;
            prev = v[i].second;
        } else {
            prev = min(prev, v[i].second);
            ++cur;
        }
    }

    cout << res << endl;

    return 0;
}