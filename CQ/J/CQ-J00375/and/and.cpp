/*

*/

#include <iostream>
#include <algorithm>
#define silu 0
using namespace std;
int n, m, a[200001], ans;
bool vis[200001];

void dfs(int depth, int cur, int last) {
    if (depth == m + 1) {
        ans = max(ans, cur);
        return;
    }
    for (int i = last + 1; i <= n; i++) 
        if (!vis[i]) {
            vis[i] = 1;
            dfs(depth + 1, cur & a[i], i);
            vis[i] = 0;
        }
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n <= 20) {
        for (int i = 1; i <= n; i++) {
            vis[i] = 1;
            dfs(2, a[i], i);
            vis[i] = 0;
        }
        cout << ans;
    } else {
        if (m == 1) {
            for (int i = 1; i <= n; i++) 
                ans = max(ans, a[i]);
            cout << ans;
        } else if (m == n) {
            ans = a[1];
            for (int i = 2; i <= n; i++) 
                ans &= a[i];
            cout << ans;
        } else if (m == 2) {
            for (int i = 1; i < n; i++) 
                for (int j = i + 1; j <= n; j++) 
                    ans = max(ans, a[i] & a[j]);
            cout << ans;
        } else { // 特殊性质 A
            sort(a + 1, a + n + 1);
            ans = a[n];
            for (int i = n - 1; i >= n - m + 1; i--) 
                ans &= a[i];
            cout << ans;
        }
    }
    return 0;
}

// 100 55