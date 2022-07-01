#include <iostream>

using namespace std;
const int maxn = 2e5 + 100;
int t, n;
int ar[maxn];
long long ps[maxn];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {


        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> ar[i];

            ps[i] = ps[i - 1] + ar[i];
        }

        if (ps[n] != 0) {
            cout << "No" << endl;
            continue;
        }

        bool ok = true;
        bool zeroVisited = false;

        for (int i = 1; i <= n; i++) {
            if (ps[i] < 0) {
                ok = false;
                break;
            }
            if (ps[i] == 0 && !zeroVisited) {
                zeroVisited = true;
            }
            else if (zeroVisited && ps[i] != 0) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

}