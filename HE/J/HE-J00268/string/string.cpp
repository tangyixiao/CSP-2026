#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int a[200005]; char c[200005];
long long sum;

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %c", &a[i], &c[i]);
        sum += a[i];
    }

    int areal = 1, cntl = 0, arear = n, cntr = 0, len = 1;
    long long ans = 0;
    for (long long i = 1; i <= sum / 2;) {
        len = min(a[areal] - cntl, a[arear] - cntr);
        if (c[areal] != c[arear]) ans += len;
        cntl += len, cntr += len;
        if (cntl >= a[areal]) cntl -= a[areal++];
        if (cntr >= a[arear]) cntr -= a[arear--];
        i += len;
    }

    printf("%lld\n", ans);
    return 0;
}
