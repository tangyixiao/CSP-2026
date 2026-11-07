#include <bits/stdc++.h>
using namespace std;

int a[500005];
int b[500005];
int cnt[500005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    int T = n;
    int cur = 0;
    int bur = 0;
    while (T--)
    {
        cur++;
        bool f[500005] = {};
        if (cur % 2 == 1)
        {
            for (int i = 1; i <= T; ++i)
            {
                if (f[a[i]])
                {
                    for (int j = i - 1; a[j] != a[i]; --j)
                    {
                        bur++;
                        if (a[i] != -1) b[bur] = a[j];
                        a[i] = -1;
                        if (a[j - 1] == a[i]) b[++bur] = a[j];
                    }
                }
                f[a[i]] = true;
            }
            for (int i = T; i >= 1; ++i)
            {
                if (a[i] != -1 && bur < T)
                {
                    bur++;
                    cnt[a[i]]++;
                    b[bur] = a[i];
                }
            }
        }
        else
        {
            for (int i = 1; i <= T; ++i)
            {
                if (f[b[i]])
                {
                    for (int j = i - 1; b[j] != b[i]; --j)
                    {
                        bur++;
                        if (b[i] != -1) a[bur] = b[j];
                        b[i] = -1;
                        if (b[j - 1] == b[i]) a[++bur] = a[j];
                    }
                }
                f[a[i]] = true;
            }
            for (int i = T; i >= 1; ++i)
            {
                if (b[i] != -1 && bur < T)
                {
                    bur++;
                    cnt[b[i]]++;
                    a[bur] = b[i];
                }
            }
        }
        bur = 0;
    }
    cout << 1 << '\n';
    for (int i = 1; i <= m; ++i)
    {
        cout << cnt[i] << " ";
    }
    return 0;
}
