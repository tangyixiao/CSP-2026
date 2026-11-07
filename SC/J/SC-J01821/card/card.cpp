#include <bits/stdc++.h>
const int SZ = 1 << 16, N = 5e5 + 5, M = 3e5 + 5;
using ll = long long;
#define fu(i, a, b) for (auto i = a; i <= b; ++i)
#define fd(i, a, b) for (auto i = a; i >= b; --i)
#define fr(i, a, b) for (auto i = a; i < b; ++i)
#define I inline
char buf[SZ], cuf[SZ];
int os, is = SZ;
I char ge() { return !(is ^ SZ) && (fread(buf, 1, SZ, stdin), is = 0), buf[is ++]; }
I bool Flush() { return fwrite(cuf, 1, os, stdout), os = 0; }
I void pu(char c) { !(os ^ SZ) && Flush(); cuf[os ++] = c; }
template <typename T> I void read(T &x) {
    char c = ge(); bool f = 0; x = 0;
    while (c < '0' || '9' < c) f = c == '-', c = ge();
    while ('0' <= c && c <= '9') x = x * 10 + (c ^ 48), c = ge();
    f && (x = -x);
}
template <typename T> I void write(T x) {
    char tmp[25]; int l = 0;
    if (!x) { pu('0'); return ; }
    if (x < 0) { pu('-'); x = -x; }
    while (x) tmp[l ++] = x % 10 + '0', x /= 10;
    while (l) pu(tmp[-- l]);
}
template <typename T> I void Write(T x, bool f = true) { write(x); pu(f ? '\n' : ' '); }
template <typename T> I T max(T a, T b) { return a > b ? a : b; }
template <typename T> I T min(T a, T b) { return a < b ? a : b; }
template <typename T> I void fmax(T &a, T b) { a = a > b ? a : b; }
template <typename T> I void fmin(T &a, T b) { a = a < b ? a : b; }

int n, m, a[N], lst[M], s;
ll ans[M], cnt[N], c[N];
struct Segment { 
    int l, r;
    bool operator<(const Segment oth) const { return l < oth.l; }
}sg[N];

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    read(n), read(m);
    fu (i, 1, n) {
        read(a[i]); ans[a[i]] += i;
        if (lst[a[i]]) sg[++ s] = {lst[a[i]], i - 1};
        lst[a[i]] = i;
    } std::sort(sg + 1, sg + s + 1);
    fu (i, 1, s) {
        int nxt = std::upper_bound(sg + 1, sg + s + 1, (Segment){sg[i].r, 0}) - sg;
        cnt[i] += sg[i].l - sg[i - 1].l; cnt[nxt] += cnt[i];
        c[sg[i].l] += cnt[i], c[sg[i].r + 1] -= cnt[i];
    }

    fu (i, 1, n) c[i] += c[i - 1], ans[a[i]] -= c[i];
    fu (i, 1, m) Write(ans[i], i == m);
    return Flush(), 0;
}