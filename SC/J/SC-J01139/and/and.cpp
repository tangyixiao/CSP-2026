#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e6 + 25;

int n, m, a[N], mx, q, ans;

map<int, bool> mp;
void dfs(int x, int c) {
    if (c == m) {
        ans = max(ans, x);
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (mp[i] == 0) {
            mp[i] = 1;
            dfs(x & a[i], c + 1);
            mp[i] = 0;
        }
    }
}

signed main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    ios :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i == 1) q = a[i];
        else q &= a[i];
        mx = max(a[i], mx);
    }
    if (m == n) {
        cout << q;
        return 0;
    }
    if (m == 1) {
        cout << mx;
        return 0;
    } 
    if (n <= 20) {
        for (int i = 1; i <= n; i++) {
            mp[i] = 1;
            dfs(a[i], 1);
            mp[i] = 0;
        }
        cout << ans;
        return 0;
    } else if (n <= 2000){
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i != j) {
                    ans = max(ans, a[i] & a[j]);
                }
            }
        }
        cout << ans;
        return 0;
    } else {
        cout << mx;
    }
    return 0;
}


/*

3 15 12 12

31 3 1 15 7
    
31  31  31  31  31
    3   3   15  15
        1   3   7


f[i][j] = f[i - 1][j - 1] & a[j], f[i][j - 1];
*/