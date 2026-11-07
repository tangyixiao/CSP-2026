#include <cstdio>
#include <algorithm>
using namespace std;

int n, m;
int a[200005], maxa;

void work1() {
    int U = (1 << n), maxn = 0;
    for (int i = 0; i < U; i++) {
        int ans = -1, cnt = 0;
        for (int k = 0; k < n; k++)
            if (i & (1 << k))
                cnt++, ans &= a[n - k];
        if (cnt == m) maxn = max(maxn, ans);
    }
    printf("%d\n", maxn);
}

void work2() {
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            ans = max(ans, a[i] & a[j]);
        }
    printf("%d\n", ans);
}

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        maxa = max(maxa, a[i]);
    }

    if (n <= 20) {
        work1();
        return 0;
    }

    if (m == 1) {
        printf("%d\n", maxa);
        return 0;
    }

    if (m == n) {
        int ans = -1;
        for (int i = 1; i <= n; i++)
            ans &= a[i];
        printf("%d\n", ans);
        return 0;
    }

    if (m == 2) {
        work2();
        return 0;
    }

    sort(a + 1, a + n + 1, cmp);
    printf("%d\n", a[m]);
    return 0;
}
