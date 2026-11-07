#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const int N = 2e5 + 10;

int cnt[N];
vector<pair<ull, char> > inp; // simplflied input vector

int main() {
  freopen("string.in", "r", stdin);
  freopen("string.out", "w", stdout);

  int n;
  cin >> n;
  int a;
  char c;
  cin >> a >> c;
  inp.push_back({a, c});
  for (int i = 1; i < n; i++) {
    cin >> a >> c;
    if (inp[inp.size() - 1].second == c) {
      inp[inp.size() - 1].first += a;
    } else {
      inp.push_back({a, c});
    }
  }

  if (inp.size() == 1) {
    cout << 0;
    return 0;
  }

  ull cnt = 0;
  int l = 0, r = inp.size() - 1;
  while (l < r) {
    while (!inp[l].first) l++;
    while (!inp[r].first) r--;
    ull sub = min(inp[l].first, inp[r].first);
    inp[l].first -= sub;
    inp[r].first -= sub;
    if (inp[l].second != inp[r].second) cnt += sub;
  }
  
  cout << cnt;

  fclose(stdin);
  fclose(stdout);
  return 0;
}
