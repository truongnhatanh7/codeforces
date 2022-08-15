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
#include <cmath>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>

using namespace std;

int t;
int n;
string s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    if (n == 1)
    {
        cin >> n;
        cout << n + 1 << endl;
        return 0;
    }
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);
    for (int i = 1; i < n; i++)
    {
        if (ar[i] - 1 != ar[i - 1])
        {
            cout << ar[i - 1] + 1 << endl;
            return 0;
        }
    }
    cout << ar[n - 1] + 1 << endl;
    return 0;
}
