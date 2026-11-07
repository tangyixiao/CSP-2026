#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5 + 10;
int a[N];
stack<int> s;
bool vis[N];
int ans[N];

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (!vis[a[j]]) {
                s.emplace(a[j]);
                vis[a[j]] = true;
                continue;
            }

            while (s.top() != a[j]) {
                vis[s.top()] = false;
                s.pop();
            }
        }

        for (int i = 1; i <= m; i++) ans[i] += vis[i];

        s = stack<int> ();
        memset(vis, false, sizeof vis);
    }

    for (int i = 1; i <= m; i++) cout << ans[i] << ' ';

    return 0;
}
