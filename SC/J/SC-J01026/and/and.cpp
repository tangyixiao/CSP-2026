#include <cstdio>
#include <algorithm>

const int N = 2e5 + 5;
int a[N];
bool vis[N];

int main() {

    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++) scanf("%d", &a[i]);

    int ans = 0;
    for (int bit = 30; bit >= 0; bit --) {
        int cnt = 0;
        for (int i = 1; i <= n; i ++) if (!vis[i] && (a[i] & (1 << bit))) cnt ++;
        if (cnt >= m) {
            ans |= (1 << bit);
            for (int i = 1; i <= n; i ++) if (!(a[i] & (1 << bit))) vis[i] = true;
        }
    }

    printf("%d\n", ans);

    return 0;
}