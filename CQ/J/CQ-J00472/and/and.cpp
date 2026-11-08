#include <bits/stdc++.h>
using namespace std;

int n, m, a[200001];
bool b[200001];

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = true;
    }
    int ans = 0;
    for (int i = 29; i >= 0; i--) {
        int t = 0;
        for (int j = 1; j <= n; j++)
            t += (b[j] && ((a[j] >> i) & 1));
        if (t >= m) {
            ans += (1 << i);
            for (int j = 1; j <= n; j++)
                b[j] &= ((a[j] >> i) & 1);
        }
    }
    printf("%d", ans);
}