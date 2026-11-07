#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N], ans; bool flag[N];
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i], flag[i] = 1;
    for (int k = 29; k >= 0; k--) {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            if (flag[i] && ((a[i] >> k) & 1)) cnt++;
        if (m <= cnt) {
            for (int i = 1; i <= n; i++)
                if (flag[i] && !((a[i] >> k) & 1)) flag[i] = 0;
            ans += 1 << k;
        }
    }
    cout << ans;
    return 0;
}