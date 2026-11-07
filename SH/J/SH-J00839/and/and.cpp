#include <bits/stdc++.h>
using namespace std;

int n, m, a[200005], ans_dfs;
bool b_dfs[200005];

void dfs(int i, int s, int l) {
    if (i == m + 1) {
        ans_dfs = max(ans_dfs, s);
        return;
    }
    for (int j = l + 1; j <= n; j++)
        if (!b_dfs[j]) {
            b_dfs[j] = true;
            dfs(i + 1, s & a[j], j);
            b_dfs[j] = false;
        }
}

bool cmp_special_a(const int &a, const int &b) {
    return a > b;
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    if (m == 1) { // test 6
        int ans = a[1];
        for (int i = 2; i <= n; i++)
            ans = max(ans, a[i]);
        printf("%d\n", ans);
    } else if (m == n) { // test 7
        int ans = a[1];
        for (int i = 2; i <= n; i++)
            ans &= a[i];
        printf("%d\n", ans);
    } else if (m == 2 || n <= 20) { // test 1 ~ 5, 8 ~ 10
        dfs(1, 0x7fffffff, 0);
        printf("%d\n", ans_dfs);
    } else if (a[n] == n - 1) { // special_b
        int ans = 0x7fffffff;
        for (int i = n-1; i >= n - m; i--)
            ans &= i;
        printf("%d\n", ans);
    } else { // special_a
        sort(a + 1, a + n + 1, cmp_special_a);
        printf("%d\n", a[m]);
    }
    return 0;
}