#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    long long n, ans = 0, cnt = 1;
    string s[200005];
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        long long a;
        string b;
        cin >> a >> b;
        for (long long j = 1; j <= a; j++) {
            s[cnt] = b;
            cnt++;
        }
    }
    cnt--;
    long long l = 1, r = cnt;
    for (long long i = 1; i <= cnt / 2; i++) {
        if (s[l] != s[r]) ans++;
        l++;
        r--;
    }
    cout << ans;
    return 0;
}
