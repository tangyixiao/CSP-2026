#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
using ll = long long;
int n, a[N], b[N]; char c[N], d[N];
ll len1, len2, ans;
ll len(ll l1, ll r1, ll l2, ll r2) {
    ll l = max(l1, l2), r = min(r1, r2);
    if (l > r) return 0;
    else return r - l + 1;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i], b[n - i + 1] = a[i], d[n - i + 1] = c[i];
    for (int i = 1, j = 1; i <= n || j <= n; )
        if (i <= n && (len1 <= len2 || j > n)) {
            if (j > 1 && c[i] != d[j - 1])
                ans += len(len1 + 1, len1 + a[i], len2 - b[j - 1] + 1, len2);
            len1 += a[i]; i++;
        } else if (j <= n) {
            if (i > 1 && d[j] != c[i - 1])
                ans += len(len2 + 1, len2 + b[j], len1 - a[i - 1] + 1, len1);
            len2 += b[j]; j++;
        }
    cout << ans / 2 << endl;
    return 0;
}