#include <bits/stdc++.h>
const int SZ = 1 << 16;
using ll = long long; using std::string;
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
I bool Check(char c) { return ('0' <= c && c <= '9') || ('A' <= c && c <= 'Z'); }
I void sread(string &x) {
    x = ""; char c = ge();
    while (!Check(c)) c = ge();
    while (Check(c)) x += c, c = ge();
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

int xa, xb;
string pa, pb;

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    read(xa), sread(pa);
    read(xb), sread(pb);
    if (xa != xb) {
        fu (i, 1, 4) pu('0');
        return Flush(), 0;
    } pu('1');

    int hga = 0, hgb = 0;
    fr (i, 0, 2) hga = hga * 10 + (pa[i] - '0');
    fr (i, 0, 2) hgb = hgb * 10 + (pb[i] - '0');

    if (hga != hgb) {
        fu (i, 1, 3) pu('0');
        return Flush(), 0;
    } pu('1');

    int pia = pa[2] - 'A', pib = pb[2] - 'A';
    if (pia > pib) std::swap(pia,pib);

    if (pia <= 2 && pib > 2) {
        fu (i, 1, 2) pu('0');
        return Flush(), 0;
    } pu('1');

    if (abs(pia - pib) == 1) pu('1');
    else pu('0');
    return Flush(), 0;
}