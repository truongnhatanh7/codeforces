#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

#define ll long long


using namespace std;

int n, m, k;

struct comp {
    bool operator()(ll const &i, ll const &j) const {
        return i > j;
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    ll app[n];
    ll ap[m];
    for (int i = 0; i < n; i++) { 
        cin >> app[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> ap[i];
    }

    ll res = 0;
    sort(app, app + n);
    sort(ap, ap + m);
    
    int a = 0;
    int b = 0;

    while (true) {
        if (a == n) break;
        if (b == m) break;
        int temp1 = app[a] - ap[b];
        int temp2 = ap[b] - app[a];
        if (app[a] == ap[b] || (temp1 > 0 && temp1 <= k) || (temp2 > 0 && temp2 <= k)) {
            ++res;
            ++a;
            ++b;
        }
        else if (app[a] > ap[b]) {
            ++b;
        } else {
            ++a;
        }
    }



    cout << res << endl;
    return 0;
}