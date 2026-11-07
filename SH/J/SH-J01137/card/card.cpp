#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;
const int M = 3e5 + 5;

int n, m;
int a[N];
int cnt[M];
pair<int, int> lastpos[M];
long long ans[M];

int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        lastpos[a[i]] = {i, a[i]};
    }

    sort(lastpos + 1, lastpos + m + 1);

    for (int i = 1; i <= m; i++)
    {
        ans[a[lastpos[i].first + 1]] += cnt[lastpos[i].second] + ans[lastpos[i].second];
    }

    for (int i = 1; i <= m; i++)
    {
        ans[i] += cnt[i];
        cout << ans[i] << ' ';
    }
    
    return 0;
}