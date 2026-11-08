#include <bits/stdc++.h>
using namespace std;
using Bs = bitset<200005>;
using ll=long long;
Bs who[32];
int a[200005];
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    cin.tie(nullptr);
    cin.sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < 32; j++)
        {
            if (a[i] >> j & 1)
                who[j].set(i);
        }
    }
    int res = 0;
    Bs sel;
    sel.flip();
    for (int i = 31; i >= 0; i--)
    {
        auto t = (sel & who[i]);
        if (t.count() >= m)
            res |= (1 << i), sel = t;
    }
    cout << res;
    return 0;
}
//