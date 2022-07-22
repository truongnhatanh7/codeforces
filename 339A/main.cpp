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
    vector<int> v;

    for (int i = 0; i < s.length(); i++) {
      if (s[i] != '+') {
        v.push_back(s[i] - '0');
      }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
      cout << v[i] << "+";
    }
    cout << v[v.size() - 1] << endl;
    return 0;
}
