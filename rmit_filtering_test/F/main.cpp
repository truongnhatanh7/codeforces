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
#include <math.h>


#define ll long long
#define pii pair<int , int>
#define pll pair<long long, long long>

using namespace std;

int t;
// int n;
string s;
vector<int> res;


void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        res.push_back(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // cout << i << " ";
            res.push_back(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        // cout << n << " ";
        res.push_back(n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a;
    cin >> a;
    if (a % 4 == 0 || a % 7 == 0 || a % 44 == 0 || a % 47 == 0 || a % 74 == 0 || a % 77 == 0 || a % 444 == 0 || a % 447 == 0 || a % 474 == 0 || a % 477 == 0 || a % 744 == 0 || a % 747 == 0 || a % 774 == 0 || a % 777 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
