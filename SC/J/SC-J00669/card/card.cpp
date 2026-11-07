#include <bits/stdc++.h>

using namespace std;
int n, m;
const int N = 5e5 + 10;
int a[N], ans[N], las[N];
int to[N];
int d[N], f[N];
int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for(int i = n; i >= 1; i--) {
        if(!las[a[i]]) to[i] = i + 1, las[a[i]] = i;
        else to[i] = las[a[i]] + 1, d[las[a[i]]]++;
    }
    // for(int i = 1; i <= n; i++) printf("%d ", to[i]);
    // printf("\n");
    for(int i = 1; i <= n; i++) f[i] = 1;
    for(int i = 1; i <= n; i++)
        f[to[i]] = f[to[i]] + f[i];
    // for(int i = 1; i <= n; i++) printf("%d ", f[i]);
    // printf("\n");
    for(int i = 1; i <= n; i++) ans[a[i]] += f[i];
    for(int i = 1; i <= m; i++) printf("%d ", ans[i]);
    printf("\n");
    return 0;
}
