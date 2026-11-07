#include <algorithm>
#include <cstdio>

#define fi first
#define se second
#define pb push_back
#define mod(x) (x -= x >= Q ? Q : 0)

typedef long long ll;

using namespace std;

struct IO {
    IO () {
        freopen("string.in", "r", stdin);
        freopen("string.out", "w", stdout);
    }
    ~IO () {
        fclose(stdin);
        fclose(stdout);
    }
} io;

const int N = 2e5 + 5;

int n;
int a[N], t[N];
char c[N];
ll L, s[N];

int main () {
    // zyt
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %c", &a[i], &c[i]);
        L += a[i], s[i] = s[i - 1] + a[i];
    }
    int r = n;
    ll ans = 0;
    for (int l = 1; l <= r; l++) {
        int x = lower_bound(s + l, s + r + 1, L - s[l] + 1) - s;
        int y = lower_bound(s + l, s + r + 1, L - s[l - 1]) - s;
        r = x;
        for (int i = x; i <= y; i++)
            if (c[i] != c[l])
                ans += min(L - s[l - 1], s[i]) - max(L - s[l] + 1, s[i - 1] + 1) + 1;
    }
    reverse(a + 1, a + n + 1);
    reverse(c + 1, c + n + 1);
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i];
    ll res = 0;
    r = n;
    for (int l = 1; l <= r; l++) {
        int x = lower_bound(s + l, s + r + 1, L - s[l] + 1) - s;
        int y = lower_bound(s + l, s + r + 1, L - s[l - 1]) - s;
        r = x;
        for (int i = x; i <= y; i++)
            if (c[i] != c[l])
                res += min(L - s[l - 1], s[i]) - max(L - s[l] + 1, s[i - 1] + 1) + 1;
    }
    printf("%lld\n", min(res, ans));
    return 0;
}