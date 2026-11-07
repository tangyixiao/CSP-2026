#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n, m, c, a[200005] = {0};
    int ans = INT_MAX;
    bool fl = 1;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans &= a[i];
        if (a[i] != i - 1)
        {
            fl = 0;
        }
    }
    if (fl)
    {
        cout << n - m;
        return 0;
    }
    if (n == m)
    {
        cout << ans;
    }
    sort(a + 1, a + n + 1);
    ans = INT_MAX;
    for (int i = n; i >= n - m + 1; i--)
    {
        if (a[i] != a[i - 1] && a[i] % 512 == 0)
        {
            m++;
            continue;
        }
        ans &= a[i];
    }
    cout << ans;
    return 0;
}
