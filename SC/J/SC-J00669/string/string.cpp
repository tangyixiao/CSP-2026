#include <bits/stdc++.h>

using namespace std;
long long n;
const long long N = 2e5 + 10;
long long a[N], c[N], sum[N];
long long l, r, inl, inr;
long long find(long long x) {
    long long l = 1, r = n;
    while(l < r) {
        long long mid = (l + r) >> 1;
        if(sum[mid] < x) l = mid + 1;
        else r = mid;
    }
    return l;
}
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    scanf("%lld", &n);
    for(long long i = 1; i <= n; i++) {
        string s; cin >> a[i] >> s;
        c[i] = s[0] - 'a' + 1;
    }
    long long len = 0;
    for(long long i = 1; i <= n; i++) 
        len = len + a[i], sum[i] = sum[i - 1] + a[i];
    if(len & 1) l = len / 2, r = l + 2;
    else l = len / 2, r = l + 1;
    long long ans = 0;
    while(1) {
        inl = find(l), inr = find(r);
        long long lenl = l - sum[inl - 1];
        long long lenr = sum[inr] - r + 1;
        if(c[inl] != c[inr]) ans = ans + min(lenl, lenr);
        l = l - min(lenl, lenr), r = r + min(lenl, lenr);
        if(l == 0 || r == sum[n] + 1) break;
    }
    printf("%lld\n", ans);
}