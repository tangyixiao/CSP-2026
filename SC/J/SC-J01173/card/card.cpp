#include <cstdio>
const int N = 500005, M = 300005;
int lst[M];
int s[N];
int a[N];
int nxt[N];
int n, m;
int main() {
    // xyy
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        nxt[lst[a[i]]] = i;
        lst[a[i]] = i;
        s[i] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(nxt[i]) s[nxt[i]] += s[i];
        else s[i + 1] += s[i];
    }
    for(int i = 1; i <= m; i++) printf("%d ", s[lst[i]]);
    fclose(stdin);
    fclose(stdout);
    return 0;
}