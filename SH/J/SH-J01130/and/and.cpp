#include <bits/stdc++.h>
using namespace std;

long long maxn = -1e9;
bool f[200005];
long long a[200005];
long long n;

void dfs(long long m, long long rest, long long ans, int step)
{
    if (m == 0)
    {
        maxn = max(maxn, ans);
        return;
    }
    for (long long i = rest + 1; i + m - 1 <= n; ++i)
    {
        if (step == 0) dfs(m - 1, i, a[i], step + 1);
        else dfs(m - 1, i, ans & a[i], step + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("and3.in", "r", stdin);
    freopen("and.out", "w", stdout);
    long long m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    dfs(m, 0, 0, 0);
    cout << maxn << '\n';
    return 0;
}
