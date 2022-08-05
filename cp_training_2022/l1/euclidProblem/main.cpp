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
#define pii pair<int , int>
#define pll pair<long long, long long>

using namespace std;

int t;
int n;
string s;

int x, y, d;
void extendedEuclid(ll A, ll B) {

    if (B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        ll temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    while (cin >> a && cin >> b) {
      //if ((char)a == ' ' || char(a) == '\n') break;
      extendedEuclid(a, b);
      cout << x << " " <<  y << " " << d << endl;
    }

    return 0;
}
