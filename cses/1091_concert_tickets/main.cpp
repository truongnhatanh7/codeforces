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


using namespace std;

ll n, m;

int search(vector<ll> v, ll target) {
    int low = 0;
    int high = v.size() - 1;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (v[mid] == target) {
            return mid;
        } else if (v[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    
    vector<ll> ar(n);
    vector<ll> query(m);
    ll temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ar[i] = temp;
    }

    for (int i = 0; i < m; i++) {
        cin >> temp;
        query[i] = temp;
    }

    sort(ar.begin(), ar.end());
    map<ll , int> seen;
    for (int i = 0; i < m; i++) {
        int tmp = search(ar, query[i]);
        if (tmp == -1 || seen.find()) {
            cout << -1 << endl;
            continue;
        }

    }
    return 0;
}