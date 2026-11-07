#include<bits/stdc++.h>
#define int long long
signed main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    std::cin >> n;
    std::vector<char> s, c (n + 1);
    std::vector<int> a (n + 1);
    int len = 0;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> a[i] >> c[i];
    }
    int l = 1, r = n;
    int ans = 0;
    while (l < r)
    {
		if (c[l] != c[r]) {
			ans += std::max(a[l], a[r]);
		}
		l++, r--;
    }
    std::cout << ans;
    return 0;
}