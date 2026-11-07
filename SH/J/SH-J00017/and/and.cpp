#include <cstdio>
#include <vector>
int n, m;
long long a[200010]; // Attention, 2 * 10^5, not 10^5
std::vector<long long> candidate; // Maybe Spell Like this, idk
std::vector<long long> cpy;
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    for(int i = 1; i <= n; i++) candidate.push_back(a[i]);
    long long ans = 0;
    for(int i = 40; i >= 0; i--) // More is better than less, and also i-- but not i++
    {
        int cnt = 0;
        for(auto x : candidate) if((x & (1ll << i)) != 0) // Attention, 1ll not 1
            cnt++;
        if(cnt >= m)
        {
            ans += (1ll << i);
            cpy = candidate;
            candidate.clear();
            for(auto x : cpy) if((x & (1ll << i)) != 0) // Attention, 1ll not 1
                candidate.push_back(x);
        }
    }
    printf("%lld", ans);
    return 0;
}
// Finish at 9:48
// All the comment(I usually call them as it) is the error I made, I'm trash :(
