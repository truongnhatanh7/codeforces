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


#define ll long long
#define pii pair<int , int>
#define pll pair<long long, long long>

using namespace std;

int t;
int n;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    char dict[] = {'h', 'e', 'l', 'l', 'o'};
    int cur = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == dict[cur]) {
        ++cur;
      }
    }
    if (cur == 5) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
