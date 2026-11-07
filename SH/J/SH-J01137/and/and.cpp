#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
const int LOG = 30;

int n, m;
int a[N];
bool rem[N];
int ans = 0;

int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        rem[i] = 1;
    }

    for (int j = LOG - 1; j >= 0; j--)
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cnt += rem[i] * (bool)(a[i] & (1 << j));
        }
        if (cnt >= m)
        {
            ans += (1 << j);
            for (int i = 1; i <= n; i++)
            {
                rem[i] &= (bool)(a[i] & (1 << j));
            }
        }
    }

    cout << ans;

    return 0;
}