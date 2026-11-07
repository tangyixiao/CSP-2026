#include <iostream>
using namespace std;
long long n, m, a[500005], b[300005], s[300005], l, sum[300005], r;
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    l = 0;
    r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = k; i <= n; i++)
        {
            if (b[a[i]] == 0)
            {
                r++;
                b[a[i]] = r;
                s[r] = a[i];
            }
            else
            {
                l = b[a[i]];
                for (int j = l; j <= r; j++)
                {
                    b[s[j]] = 0;
                    s[j] = 0;
                }
                r = l;
                b[a[i]] = r;
                s[r] = a[i];
                l = 0;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            sum[s[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            b[i] = 0;
            s[i] = 0;
            l = 0;
            r = 0;
        }
    }
    for (int i = 1; i <= m; i++)
        cout << sum[i] << " ";
    return 0;
}
