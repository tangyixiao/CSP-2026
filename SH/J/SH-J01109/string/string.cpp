#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 7;
int n, a[N], tot, st, ans;
char c[N];
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i], tot += a[i];
    int len1 = 0, len2 = 0, pos = 1;
    for (; pos <= n; pos++)
    {
        len1 += a[pos];
        if (len1 >= (tot + 1) / 2)
            break;
    }
    len1 -= a[pos];
    for (int i = n; i > pos; i--)
        len2 += a[i];
    if (len1 >= len2)
        st = pos, a[pos] = len1 - len2;
    else
        st = pos + 1, a[pos] = len2 - len1;
    for (int l = st, r = st - 1, llen = 0, rlen = 0; l > 1 || r < n;)
    {
        while (l > 1 && llen <= rlen)
        {
            llen += a[--l];
            if (c[l] != c[r])
                ans += a[l] - max(0LL, llen - rlen);
        }
        while (r < n && rlen <= llen)
        {
            rlen += a[++r];
            if (c[l] != c[r])
                ans += a[r] - max(0LL, rlen - llen);
        }
    }
    cout << ans << endl;
    return 0;
}