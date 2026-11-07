#include <bits/stdc++.h>
const int SZ = 1 << 16, N = 2e5 + 5;
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

int n, a[N], m, ans, tmp[N];

void solve(int r, int bit) {
    if (bit < 0) return ;
    int cnt = 0;
    fu (i, 1, r) cnt += (a[i] >> bit & 1);

    if (cnt < m) return solve(r, bit - 1);

    ans |= (1 << bit); cnt = 0;
    fu (i, 1, r) (a[i] >> bit & 1) && (tmp[++ cnt] = a[i]);
    fu (i, 1, cnt) a[i] = tmp[i];
    solve(cnt, bit - 1);
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    read(n), read(m);
    fu (i, 1, n) read(a[i]);
    solve(n, 29); Write(ans);
    return Flush(), 0;
}