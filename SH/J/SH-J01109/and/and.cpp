#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 7;
int n, m, a[N], f[N], ans;
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 30; ~i; i--)
    {
        int ct = 0;
        for (int j = 1; j <= n; j++)
            if (!f[j] && (a[j] & (1LL << i)))
                ct++;
        if (ct >= m)
        {
            ans += (1LL << i);
            for (int j = 1; j <= n; j++)
                if (!f[j] && !(a[j] & (1LL << i)))
                    f[j] = 1;
        }
    }
    cout << ans << endl;
    return 0;
}