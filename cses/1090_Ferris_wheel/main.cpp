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

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, x;
    cin >> n >> x;
    vector<ll> ar;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ar.push_back(temp);
    }
    sort(ar.begin(), ar.end(), greater<ll>());

    int res = 0;
    int low = 0;
    int high = n - 1;
    while (true) {
        // cout << low << " " << high << endl;
        if (low > high) break;
        if (ar[low] + ar[high] <= x) {
            low++;
            high--;
            res++;
        } else if (ar[low] + ar[high] > x) {
            low++;
            res++;
        } 
    }
    cout << res << endl;

    return 0;
}