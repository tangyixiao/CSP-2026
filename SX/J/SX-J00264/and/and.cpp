#include<bits/stdc++.h>
#define int long long
signed main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a (n + 1);
    for (int i = 1; i <= n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a.begin() + 1, a.end());
    int ma = INT_MIN;
    int ans = a[n];
    for (int i = 1; i < m; i++)
    {
        ans = (ans & a[n - i]);
    }
    std::cout << ans;
    return 0;
}