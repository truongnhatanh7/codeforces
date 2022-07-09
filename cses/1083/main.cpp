#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int l = n - 1;
    long long ar[l];

    long long s = 0;
    long long m = -1;

    for (int i = 0; i < l; i++) {
        cin >> ar[i] ;
        m = max(m, ar[i]);

    }
     s=  m*(m + 1)/2;

    for (int i = 0;i < n - 1; i++) {
        s -= ar[i];
    }

    cout << s << endl;
    return 0;   
}