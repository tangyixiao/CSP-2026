#include <bits/stdc++.h>
using namespace std;

int n, m, a[200005], ans[200005];

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) {
        int k[200005] = {}, l[100005] = {}, st = i;
        for (int j = i; j <= n; j++) {
            if (l[a[j]]) st = j;
            l[a[j]] = j;
        }
        for (int j = st; j <= n; j++)
            ans[a[j]]++;
    }
    for (int i = 1; i <= m; i++)
        printf("%d ", ans[i]);
    return 0;
}