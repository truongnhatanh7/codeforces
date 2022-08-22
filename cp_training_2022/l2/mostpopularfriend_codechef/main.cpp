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
#include <sstream>
#include <iomanip>

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>

using namespace std;

int t;
int n;
string s;

int resV = -1;
int distV = -1;

double bfs(int s, vector<vector<int>> ar)
{
  vector<bool> visited;
  vector<int> dist;
  dist.assign(n, 0);
  visited.assign(n, false);

  list<int> queue;

  visited[s] = true;
  queue.push_back(s);

  while (!queue.empty())
  {
    s = queue.front();
    queue.pop_front();

    for (int adjecent : ar[s])
    {
      if (!visited[adjecent])
      {
        visited[adjecent] = true;
        dist[adjecent] += dist[s] + 1;
        queue.push_back(adjecent);
      }
    }
  }

  ll totalDist = 0;
  for (auto i : dist) {
    // cout << i << " ";
    totalDist += i;
  }
  cout << endl;
  return totalDist;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> t;
  while (t--)
  {
    cin >> n;
    cin.ignore();
    // int ar[n][n];
    vector<vector<int>> ar(n);

    for (int i = 0; i < n; i++)
    {
      getline(cin, s);
      stringstream ss(s);
      vector<int> v;
      int temp;
      while (getline(ss, s, ' '))
      {
        temp = stoi(s);
        v.push_back(temp - 1);
      }
      ar[i] = v;
    }
    // for (int i = 0; i < n; i++) {
    //   for (auto a: ar[i]) {
    //     cout << a << " ";
    //   }
    //   cout << endl;
    // }
    double res = 1000000000.0;
    int v = 0;
    for (int i = 0; i < n; i++) {
      // cout << i << endl;
      double tmp = bfs(i, ar);
      if (tmp < res) {
        v = i;
        res = tmp; 
      }
    }
    cout << v + 1 << " " << fixed << setprecision(6) << res / n << endl;
  }

  return 0;
}
