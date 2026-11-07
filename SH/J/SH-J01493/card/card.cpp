#include <iostream>
#include <cstring>
using namespace std;
freopen("card.in", "r");
freopen("card.out", "w");
int loc[300001], a[500001], cnt[300001];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        int len = 0;
        for (int j = i; j <= n; j++)
        {
            if (loc[a[j]] == 0)
            {
                loc[a[j]] = len + 1;
                len++;
            }
            else
            {
                len = loc[a[j]];
                for (int k = 1; k <= m; k++)
                {
                    if (loc[k] > len) loc[k] = 0;
                }
            }
        }
        for (int j = 1; j <= m; j++)
        {
            if (loc[j]) cnt[j]++;
        }
        memset(loc, 0, sizeof loc);
    }
    for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
    return 0;
}