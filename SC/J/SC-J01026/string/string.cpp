#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
typedef long long ll;

const int N = 2e5 + 10;
int a[N];
int b[N], n;

int main() {

    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        scanf("%d ", &a[i]);
        b[i] = getchar() - 'a';
    }

    int pos = n, cntp = a[pos];
    ll ans = 0;
    for (int i = 1; i <= n; i ++) {
        int cnt = a[i];
        while (cnt) {
            int len = std :: min(cntp, cnt);
            cnt -= len, cntp -= len, ans += (b[i] != b[pos]) * len;
            if (cntp == 0) pos --, cntp = a[pos];
        }
    }

    printf("%lld\n", ans >> 1);

    return 0;

}