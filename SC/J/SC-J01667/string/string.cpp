#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

const int N = 2e5 + 10;
using ll = long long;
int n;
ll a[N];
char c[N];

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    ll cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i] >> c[i];
        cnt += a[i];
    }
    int i = 1, j;
    ll pre = 0;
    for (; pre <= cnt / 2; ++i) pre += a[i];
    ll d1 = pre - cnt / 2 - (cnt % 2), d2 = cnt / 2 - pre + a[--i];
    ll mn = min(d1, d2);
    ll l = cnt / 2 - mn, r = cnt / 2 + mn + 1 + (cnt % 2);
    a[i] -= mn * 2 + (cnt % 2);
    if (a[i] <= 0) j = i + 1, i = i - 1;
    else {
        if (d1 > d2) {
            j = i, i = i - 1;
        } else j = i + 1;
    }
    ll ans = 0;
    while (l > 0 || r < cnt) {
        if (a[i] > a[j]) {
            if (c[i] != c[j]) {
                ans += a[j];
            }
            l -= a[j], r += a[j];
            a[i] -= a[j];
            j++;
        } else if (a[i] < a[j]) {
            if (c[i] != c[j]) {
                ans += a[i];
            }
            l -= a[i], r += a[i];
            a[j] -= a[i];
            i--;
        } else {
            if (c[i] != c[j]) {
                ans += a[i];
            }
            l -= a[i], r += a[i];
            i--, j++;
        }
    }
    cout << ans;
    return 0;
}
