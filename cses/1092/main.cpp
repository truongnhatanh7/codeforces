#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n; cin >> n;
    if ((n * (n+1)) % 4 == 0)
    {
        cout << "YES\n";
        set<long long> a, b;
        for (int i = 1; i <= n; ++i) a.insert(i);
        long long x = (n*(n+1))/4;
        
        for (int i = n; i >= 1; --i)
            if (i <= x) { x -= i; a.erase(i); b.insert(i); }
        cout << a.size() << '\n';
        for (auto &x : a) cout << x << " "; cout << '\n';
        cout << b.size() << '\n';
        for (auto &x : b) cout << x << " "; cout << '\n';
    }
    else cout << "NO\n";
    return 0;
}