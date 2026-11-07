#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n;
long long a[N], sum = 0;
char c[N];

int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> c[i];
        sum += a[i];
    }

    long long ls = 0, le = 0, li = 0, rs = 0, re = 0, ri = n + 1;
    long long ans = 0;

    while (true)
    {
        
        if (le < re)
        {
            ls = le + 1;
            le = min(le + a[++li], sum / 2);
        }
        else if (re < le)
        {
            rs = re + 1;
            re = min(re + a[--ri], sum / 2);
        }
        else
        {
            ls = le + 1;
            le = min(le + a[++li], sum / 2);
            rs = re + 1;
            re = min(re + a[--ri], sum / 2);
        }
        ans += (c[li] != c[ri]) * max(0ll, min(le, re) - max(ls, rs) + 1);

        
        if (le >= sum / 2 && re >= sum / 2 || li > n || ri <= 0) break;
    }

    cout << ans;
    
    return 0;
}