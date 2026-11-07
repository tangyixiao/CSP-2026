#include <bits/stdc++.h>
using namespace std;
long long ans = 0;
int n, sum[200005];
char c[200005];
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> sum[i] >> c[i];
    }
    for (int i = 1, j = n; i < j; )
    {
        if (c[i] != c[j])
        {
            if (sum[i] < sum[j])
            {
                ans += sum[i];
                sum[j] -= sum[i];
                i++;
            }
            else if (sum[i] > sum[j])
            {
                ans += sum[j];
                sum[i] -= sum[j];
                j--;
            }
            else
            {
                ans += sum[i];
                i++, j--;
            }
        }
        else
        {
            if (sum[i] < sum[j])
            {
                sum[j] -= sum[i];
                i++;
            }
            else if (sum[i] > sum[j])
            {
                sum[i] -= sum[j];
                j--;
            }
            else
            {
                i++, j--;
            }
        }
    }
    cout << ans;
    return 0;
}
