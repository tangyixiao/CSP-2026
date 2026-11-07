#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

const int N = 2e5 + 10;
int n, m;
int d[50];
map<int, int> used;
vector<int> v[50];

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        for (int b = 0; b <= 30; ++b) {
            if (x & (1<<b)) {
                d[b]++;
                v[b].push_back(x);
            }
        }
    }
    int tot = 0, ans = 0;
    for (int b = 30; b >= 0; --b) {
        if (d[b] >= m) {
            ans += 1<<b;
            for (int i = 0; i < b; ++i) d[i] = 0;
            for (auto t : v[b]) {
                if (used[t] < tot) continue;
                used[t]++;
                for (int bb = 0; bb < b; ++bb) {
                    if (t & (1<<bb)) {
                        d[bb]++;
                    }
                }
            }
            ++tot;
        }
    }
    cout << ans;
    return 0;
}
