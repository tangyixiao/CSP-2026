#include <bits/stdc++.h>
using namespace std;
int bin_l, bin_i[31];
int a[200005], a_max = 0;
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    memset(bin_i, -1, sizeof(bin_i));
    int ans = INT_MAX;
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    a_max = a[n - 1];
    for (int i = 30; i >= 0; i--)
        if (a_max > (1 << i))
        {
            bin_l = i + 1;
            break;
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < bin_l; j++)
        {
            if (bin_i[j] != -1)
                continue;
            if (a[i] >= (1 << j))
                bin_i[j] = i;
        }
    }
    bin_i[bin_l] = n - 1;
    for (int i = bin_l; i > 0; i--)
    {
        int t = INT_MAX;
        if (bin_i[i] - bin_i[i - 1] >= m)
        {
            for (int j = bin_i[i]; j > bin_i[i] - m; j--)
            {
                t &= a[j];
            }
            printf("%d\n", t);
            return 0;
        }
    }
    for (int i = n - 1; i >= n - m; i--)
        ans &= a[i];
    printf("%d\n", ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}