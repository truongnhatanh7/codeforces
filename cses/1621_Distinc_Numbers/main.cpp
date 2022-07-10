#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

#define long long ll


using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    int res = 1;
    int prev = ar[0];
    for (int i = 1; i < n; i++) {
        while (ar[i] == prev) {
            if (i == n - 1) {
                cout << res << endl;
                return 0;
            }
            ++i;
        }
        res++;
        prev = ar[i];
    }

    cout << res << endl;


    return 0;
}