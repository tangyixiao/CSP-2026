#include <bits/stdc++.h>

long long is_have(std::vector<long long> target, long long what)
{
    for(long long i = 0;i < target.size();i++)
    {
        if(what == target[i]) return i;
    }
    return -1;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    std::vector<long long> desktop;
    long long n,m;
    std::cin >> n >> m;
    std::vector<long long> cards, unavailable;
    for(long long i = 1;i <= n;i++)
    {
        long long a;
        std::cin >> a;
        cards.push_back(a);
    }
    int anss[m] = {};
    for(long long i = 1;i <= n;i++)
    {
        desktop.clear();
        unavailable.clear();
        for(long long j = i - 1;j < cards.size();j++)
        {
            long long id;
            if(id = is_have(desktop,cards[j]), id == -1) desktop.push_back(cards[j]);
            else
            {
                if(id != 0)
                {
                    for(auto it = desktop.begin() + id;it != desktop.end();it++) it = desktop.erase(it);
                }
                else desktop.clear();
                desktop.push_back(cards[j]);
            }
        }
        for(long long j = 1;j <= m;j++) if(is_have(desktop,j) != -1) anss[j - 1]++;
    }
    for(int i = 0;i < m;i++) std::cout << anss[i] << ' ';
    return 0;
}
