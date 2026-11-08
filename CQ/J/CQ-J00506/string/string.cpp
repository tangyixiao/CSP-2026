// T2
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, ans;
vector<ll> a;
vector<char> c;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    a.assign(n + 5, 0LL);
    c.assign(n + 5, ' ');
    ll tot = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i] >> c[i];
        tot += a[i];
    }
    ll l1 = 0, r1 = tot;
    ll l2 = 1, r2 = n;
    bool flag = 1;
    while (l1 < r1 && l2 < r2)
    {
        ll last_l = l1 + 1, last_r = r1;
        if (!flag)
            last_r--;
        l1 += min(a[l2], a[r2]);
        r1 -= min(a[l2], a[r2]);
        if (flag)
        {
            r1++;
            flag = 0;
        }
        if (c[l2] != c[r2])
            ans += (l1 - last_l + 1);
        if (a[l2] < a[r2])
        {
            a[r2] -= a[l2];
            l2++;
        }
        else if (a[l2] > a[r2])
        {
            a[l2] -= a[r2];
            r2--;
        }
        else if (a[l2] == a[r2])
        {
            l2++;
            r2--;
        }
    }
    cout << ans << "\n";
    return 0;
}

// 最开始的暴力思路：一个一个找对应 id 二重循环慢慢累加（复杂度可想而知）
// 思路：按一段处理，从两边不断向中间靠（希望正解是这样吧。。。）