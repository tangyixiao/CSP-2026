#include <bits/stdc++.h>
using namespace std;

struct node {
    int t;
    char c;
} a[200005], b[200005];

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int t;
        char c;
        scanf("%d %c", &t, &c);
        a[i].t = t, a[i].c = c;
        b[n - i + 1].t = t, b[n - i + 1].c = c;
    }
    long long ans = 0;
    for (int i = 1, j = 1; i <= n && j <= n; ) {
        int ps = min(a[i].t, b[j].t);
        if (a[i].c != b[j].c) ans += ps;
        a[i].t -= ps, b[j].t -= ps;
        if (a[i].t == 0) i++;
        if (b[j].t == 0) j++;
    }
    printf("%lld\n", ans >> 1);
    return 0;
}
