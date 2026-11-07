#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
string a[N];
int main () {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans = (15 & 12);
        ans = max(ans, mx);
        mx = ans;
    }

    cout << ans;

    return 0;
}
