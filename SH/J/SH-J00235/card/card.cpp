#include <bits/stdc++.h>
using namespace std;
int a[500005], cnt[300005];
bool flag[300005];
int card[300005], card_l;
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
    {
        memset(flag, 0, sizeof(flag));
        for (int j = i; j <= n; j++)
        {
            if (!flag[a[j]])
            {
                card[card_l++] = a[j];
                flag[a[j]] = 1;
            }
            else
            {
                while (card[card_l - 1] != a[j])
                {
                    flag[card[card_l - 1]] = 0;
                    card_l--;
                }
            }
        }
        while (card_l != 0)
        {
            cnt[card[card_l - 1]]++;
            card_l--;
        }
    }
    for (int i = 1; i <= m; i++)
        printf("%d ", cnt[i]);
    fclose(stdin);
    fclose(stdout);
    return 0;
}