#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long flag[200005];
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int j = 31; j >= 0; j--)
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if ((a[i] & (1ll << j)) && flag[i] == false)
                cnt++;
        }
        if (cnt >= m)
        {
            for (int i = 1; i <= n; i++)
            {
                if (!((a[i] & (1ll << j)) && flag[i] == false))
                    flag[i] = true;
            }
        }
    }
    bool fflag = false;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((!flag[i]) && (!fflag))
        {
            ans = a[i];
            fflag = true;
        }
        else if ((!flag[i]))
            ans &= a[i];
    }
    cout << ans;
    return 0;
}
