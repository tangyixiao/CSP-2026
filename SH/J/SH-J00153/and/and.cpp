#include <bits/stdc++.h>
using namespace std;
#define ll uint64_t
int n, m;
ll a[200010], dp[200010][200010];

ll same() {
    ll ret = a[1];
    for (int i = 2; i <= n; ++i) {
        ret &= a[i];
    }
    return ret;
}

ll largest() {
    ll ret = a[1];
    for (int i = 2; i <= n; ++i) {
        ret = max(ret, a[i]);
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr), cout.tie(nullptr);

    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    if (m == n) cout << same();
    if (m == 1) cout << largest();

    /* dp[1][1] = a[1];
    for (int i = 1; i <= n; ++i) dp[1][i] = max(a[i], dp[1][i - 1]);
    for (int i = 2; i <= m; ++i) {
        dp[i][i] = a[i] & dp[i - 1][i - 1];
        for (int j = i + 1; j <= n; ++j) {
            ll tmp = 0;
            for (int k = i; k < j; ++k)
                tmp = max(tmp, dp[i - 1][k] & a[j]);
            dp[i][j] = max(tmp, dp[i][j - 1]);
        }
    } */

    cout << dp[m][n] << "\n";
    return 0;
}