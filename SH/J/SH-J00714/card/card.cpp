#include <bits/stdc++.h>
using namespace std;
long long a[500005];
long long val[500005];
long long nxt[500005];
long long ans[500005];
long long dp[500005];
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = 1;
    }
    for (int i = n; i >= 1; i--)
    {
        if (val[a[i]] == 0)
        {
            nxt[i] = i + 1;
            val[a[i]] = i;
        }
        else
            nxt[i] = val[a[i]] + 1;
    }
    for (int i = 1; i <= n; i++)
        dp[nxt[i]] += dp[i];
    for (int i = 1; i <= n; i++)
        ans[a[i]] += dp[i];
    for (int i = 1; i <= m; i++)
        cout << ans[i] << " ";
    return 0;
}
