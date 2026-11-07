// tot 372pts
// 48 + 8 + 4 + 12 = 72pts
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 7;
int n, m, a[N], b[N], stk[N], tp, ans[N], pos[N], len[N];
void print()
{
    for (int i = 1; i <= m; i++)
        cout << ans[i] << " \n"[i == m];
}
// testcase1~12  48pts  O(n^2)
void solve1()
{
    for (int i = 1; i <= n; i++)
    {
        tp = 0;
        for (int j = 1; j <= m; j++)
            pos[j] = 0;
        for (int j = i; j <= n; j++)
            if (pos[a[j]])
                while (tp != pos[a[j]])
                    pos[stk[tp--]] = 0;
            else
                stk[++tp] = a[j], pos[a[j]] = tp;
        for (int j = 1; j <= m; j++)
            if (pos[j])
                ans[j]++;
    }
    print();
}
// testcase20  4pts  O(n+m)  A
void solve2()
{
    for (int i = 1; i <= n; i++)
        if (a[i] != a[i + 1])
            ans[a[i]] = i;
    print();
}
// testcase13~14  8pts  O(n)  m=2
void solve3()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 1 || a[n] != 1)
            ans[2]++;
        if (a[i] != 2 || a[n] != 2)
            ans[1]++;
    }
    print();
}
// testcase15~17  12pts  O(4999)  B
void solve4()
{
    int tot = 0;
    for (int i = 1; i <= n; len[tot]++, i++)
        if (a[i - 1] != a[i])
            b[++tot] = a[i];
    for (int i = 1; i <= tot; i++)
    {
        tp = 0;
        for (int j = 1; j <= m; j++)
            pos[j] = 0;
        for (int j = i; j <= tot; j++)
            if (pos[b[j]])
                while (tp != pos[b[j]])
                    pos[stk[tp--]] = 0;
            else
                stk[++tp] = b[j], pos[b[j]] = tp;
        for (int j = 1; j <= m; j++)
            if (pos[j])
                ans[j] += len[i];
    }
    print();
}
bool checkA()
{
    for (int i = 1; i < n; i++)
        if (a[i] > a[i + 1])
            return 0;
    return 1;
}
bool checkB()
{
    int c = 0;
    for (int i = 1; i < n; i++)
        if (a[i] != a[i + 1])
            c++;
    return c <= 4999;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (m == 1)
        return cout << n << endl, 0;
    else if (m == 2)
        solve3();
    else if (checkA())
        solve2();
    else if (checkB())
        solve4();
    else
        solve1();
    return 0;
}