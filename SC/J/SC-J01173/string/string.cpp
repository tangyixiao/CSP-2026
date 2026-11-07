#include <cstdio>
#include <algorithm>
typedef long long ll;
const int N = 200005;
ll a[N];
char c[N];
ll ans;
int n;
int main() {
    // xyy
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        c[i] = getchar();
        c[i] = getchar();
    }
    for(int i = 1, j = n; i < j;) {
        ll t = std::min(a[i], a[j]);
        if(c[i] != c[j]) ans += t;
        a[i] -= t, a[j] -= t;
        if(a[i] == 0) i++;
        if(a[j] == 0) j--;
    }
    printf("%lld\n", ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}