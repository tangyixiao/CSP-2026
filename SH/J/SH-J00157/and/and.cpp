#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
ll a[N], n, m;
bool cmp(int a, int b)
{
    return __builtin_popcount(a) == __builtin_popcount(b) ? a > b: __builtin_popcount(a) > __builtin_popcount(b);
}
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%lld %lld", &n, &m);
    ll last = 0;
    bool B = 1;
    for (int i = 1; i <= n; i ++)
    {
        scanf("%lld", &a[i]);
        if (last ++ != a[i])
        {
            B = 0;
        }
    }
    // printf("%lld\n", n);
    if (B)
    {
        sort(a + 1, a + n + 1, greater<ll>());
    }
    else
    {
        sort(a + 1, a + n + 1, cmp);
    }
    // for (int i = 1; i <= n; i ++)
    // {
    //     printf("%lld ", a[i]);
    // }
    // puts("");
    ll ans = a[1];
    for (int i = 2; i <= m; i ++)
    {
        ans &= a[i];
    }
    printf("%lld\n", ans);
    return 0;
}