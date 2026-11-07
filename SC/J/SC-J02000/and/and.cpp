#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 10;
int n, m;
int a[N];
int sum1[N], sum2[N];
int mx;

void dfs(int x, int cnt, int v) {
    if (cnt == m) {
        mx = max(mx, v);
        return;
    }

    if (x > n) return;

    dfs(x + 1, cnt, v);
    dfs(x + 1, cnt + 1, cnt == 0 ? a[x] : (v & a[x]));
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    cin >> n >> m;

    bool f1 = true, f2 = true;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        bool p = false;
        for (int j = 30; j >= 0; j--)
            if ((1 << j) - 1 == a[i]) {
                p = true;
                break;
            }
        if (!p) f1 = false;

        if (a[i] >= 4) f2 = false;
    }
    sort(a + 1, a + n + 1, greater<int> ());

    if (m == 1) {
        int ans = 0;
        for (int i = 1; i <= n; i++) ans = max(ans, a[i]);
        cout << ans;
    } else if (m == 2) {
        int ans = 0;
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                ans = max(ans, a[i] & a[j]);
        cout << ans;
    } else if (m == n) {
        int ans = a[1];
        for (int i = 2; i <= n; i++) ans &= a[i];
        cout << ans;
    } else if (m == n - 1) {
        sum1[1] = a[1];
        for (int i = 2; i <= n; i++) sum1[i] = sum1[i - 1] & a[i];
        sum2[n] = a[n];
        for (int i = n - 1; i >= 1; i--) sum2[i] = sum2[i + 1] & a[i];

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            if (i == 1) x = sum2[i + 1];
            else if (i == n) x = sum1[i - 1];
            else x = sum1[i - 1] & sum2[i + 1];
            ans = max(ans, x);
        }
        cout << ans;
    } else if (f2) {
        int cnt[4] = {0, 0, 0, 0};
        for (int i = 1; i <= n; i++) cnt[a[i]]++;

        if (m <= cnt[3]) cout << 3;
        else if (m - cnt[3] <= cnt[2]) cout << 2;
        else if (m - cnt[3] <= cnt[1]) cout << 1;
        else cout << 0;
    } else if (f1) {
        int ans = a[1];
        for (int i = 2; i <= m; i++) ans &= a[i];
        cout << ans;
    } else {
        dfs(1, 0, 0);
        cout << mx;
    }

    return 0;
}
