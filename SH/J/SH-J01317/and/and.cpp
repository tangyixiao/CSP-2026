#include <bits/stdc++.h>
using namespace std;

long long a[200005], b[21];

long long ans = 0;

void dfs(int m, int n, long long now, int ni, int step)
{
    if(step == m)
    {
        ans = max(ans, now);
        return;
    }
    else
    {
        for(int i = ni + 1; i <= n; i++)
        {
            dfs(m, n, now & a[i], i, step +1);
        }
    }
}

int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    long long n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    if(m == 1)
    {
        cout << a[n];
    }
    else if(n <= 20)
    {
        for(int i = 1; i <= n; i++)
        {
            dfs(m, n, a[i], i, 1);
        }
        cout << ans;
    }
    else
    {
        long long b = a[n];
        for(int i = n - 1; i >= 1; i++)
        {
            b |= a[n];
        }
        cout << b;
    }
    return 0;
}
