#include <stdio.h>
int a[200001];
char c[200001];
inline long long max(long long a, long long b) noexcept {
    return a > b ? a : b;
}
inline long long min(long long a, long long b) noexcept {
    return a < b ? a : b;
}
struct pair {
    long long st, ed;
    char c;
} map[200001];
int main(void) {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    long long len = 0, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %c", &a[i], &c[i]);
        map[i] = {len + 1, len + a[i], c[i]};
        len += a[i];
    }
    for (int i = 0, j = n - 1; i < n; ++i, ++j) {    // why to ++j?
        long long st = map[i].st, ed = map[i].ed;
        long long opst = len - ed + 1, oped = len - st + 1;
        while (oped < map[j].st && j >= 0) {
            j -= 1;
        }
        while (map[j].ed >= opst && j >= 0) {
            long long l = max(opst, map[j].st), r = min(oped, map[j].ed);
            ans += (r - l + 1) * (map[j].c != map[i].c);
            j -= 1;
        }
    }
    ans >>= 1;
    printf("%lld\n", ans);
    return 0;
}