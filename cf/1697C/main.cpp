#include <iostream>
#include <algorithm>
using namespace std;

int n;
int l;
string s;
string t;

void solve() {
        cin >> l;
        cin >> s;
        cin >> t;
        if (count(s.begin(), s.end(), 'b') != count(t.begin(), t.end(), 'b')) {
            cout << "NO" << endl;
            return;
        }
        int j = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] == 'b') {
                continue;
            }
            while (t[j] == 'b') {
                j++;
            }
            if (s[i] != t[j] || (s[i] == 'a' && i > j) || (s[i] == 'c' && i < j)) {
                cout << "NO" << endl;
                return;
            } 
            j++;
        }
        cout << "YES" << endl;
}

int main() {
    cin >> n;
    while (n--) {
        // cout << n << endl;
        solve();
    }
    return 0;
}