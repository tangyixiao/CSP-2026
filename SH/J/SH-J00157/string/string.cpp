#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
struct range
{
    ll l = 0, r = 0;
    char c = '\0';
} a[N];
ll n, L = 0;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%lld", &n);
    ll st = 1;
    for (int i = 1; i <= n; i ++)
    {
        ll len;
        char c;
        scanf("%lld %c", &len, &c);
        // putchar(c);
        // puts("");
        a[i].l = st;
        a[i].r = st + len - 1;
        a[i].c = c;
        st = st + len;
        L += len;
    }
    // cout << L << endl;
    ll p1 = 1, p2 = n, ans = 0;
    for (ll i = 1; i <= L / 2; i ++)
    {
        char c1 = a[p1].c, c2 = a[p2].c;
        if (c1 != c2)
        {
            ans ++;
        }
        if (i + 1 > a[p1].r)
        {
            p1 ++;
        }
        if (L - i < a[p2].l)
        {
            p2 --;
        }
    }
    printf("%lld\n", ans);
    return 0;
}