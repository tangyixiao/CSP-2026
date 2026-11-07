#include <bits/stdc++.h>
using namespace std;
int n, m, c[500005], ans[300005];
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    bool fl = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        if (c[i] < c[i - 1])
        {
            fl = 0;
        }
    }
    if (fl)
    {
        for (int i = 2; i <= n; i++)
        {
            if (c[i] != c[i - 1])
            {
                ans[c[i - 1]] = i - 1;
            }
        }
        for (int i = 1; i <= m - 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << n;
        return 0;
    }
    for (int i = 1;  i <= n; i++)
    {
        int pos = 1, a[300005] = {0};
        for (int j = i; j <= n; j++)
        {
            int sm = -1;
            for (int k = pos; k >= 1; k--)
            {
                if (c[j] == a[k])
                {
                    sm = k;
                    break;
                }
            }
            if (sm != -1)
            {
                for (int s = pos; s > sm; s--)
                {
                    a[s] = 0;
                }
                pos = sm;
            }
            else
            {
                a[++pos] = c[j];
            }
        }
        for (int j = 1; j <= pos; j++)
        {
            ans[a[j]]++;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
