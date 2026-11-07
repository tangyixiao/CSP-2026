#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
string a[N], b[N];
int main () {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    string c;
    long long a1 = 0;
    cin >> n;
    long long len = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a1 >> c[i];
        len += a1;
        for (int i = 1; i <= len; i++) {
            if (c[i] != ' ') {
                a[i] += c[i];
                b[i] += c[i];
            }

        }

    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        swap(a[i], a[len - i]);
        if (len <= 2) {
            cout << "0";
            return 0;
        } else if (a[i] != b[i]) {
            ans++;
        }

    }

    cout << ans;
    return 0;
}
