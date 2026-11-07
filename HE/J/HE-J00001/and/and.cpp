#include <bits/stdc++.h>

int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n,m;
    std::cin >> n >> m;
    std::vector<int> v;
    for(int i = 1;i <= n;i++)
    {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    std::sort(v.begin(),v.end());
    std::cout << v[m - 1];
    return 0;
}
