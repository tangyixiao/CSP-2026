/* encoding: utf-8 */
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 2e5+5;

int n, m, a[N], res;

void dfs(int i, int cnt, int ans) {
    if (cnt == m) {
        res = max(res, ans);
        return;
    }
    for (int j = i + 1; j <= n; ++j)
        dfs(j, cnt + 1, ans & a[j]);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        dfs(i, 1, a[i]);
    cout << res << endl;
    return 0;
}

/* 注意到 (100000)2 大于 (011111)，因此从高到低每一位枚举一下，哪个有1就好。才怪了 */
/* 不会做T3，写退役录吧 */