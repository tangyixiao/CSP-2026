#include <bits/stdc++.h>
using namespace std;

int n, m, maxn = 0, an;
long long a[200005];

int main()
{
    freopen ("and.in", "r", stdin);
    freopen ("and.out", "w", stdout);

    cin >> n >> m;
    for (int i=1; i<=n; i++)  cin >> a[i];
    sort (a+1, a+n+1);
    an = a[n];
    for (int i=1; i<=m; i++)
    {
        an = an&a[n-i];
        maxn = max (maxn, an);
    }
    cout << maxn;

    return 0;
}
