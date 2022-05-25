#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    double n, m, a;
    cin >> n >> m >> a;
    long long int res = 0;
    res = ceil(m / a) * ceil(n / a);
    cout << res << endl;
    return 0;
}