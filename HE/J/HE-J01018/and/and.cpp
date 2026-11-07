#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m;
int a[N];

int ans;
bool vis[N];
void dfs(int p, int now) {
    if (p == m) {
        ans = max(ans, now);
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (!vis[i] && now&a[i]>ans) {
            vis[i] = 1;
            dfs(p+1, now&a[i]);
            vis[i] = 0;
        }
    }
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    dfs(0, (1<<31)-1);
    cout << ans;
    return 0;
}
